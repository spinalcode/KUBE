// KUBE
// Version 1.00
// May 15th 24 - May 27th 24
// Matthew Bryan

#define ABG_IMPLEMENTATION
//#define ABG_SYNC_SLOW_DRIVE
#define ABG_SYNC_PARK_ROW
//#define ABG_TIMER4
#define ABG_TIMER4
#include "ArduboyG.h"

ArduboyG_Config<ABG_Mode::L4_Triplane> a;

//ArduboyG a;
//ArduboyGBase_Config<ABG_Mode::L4_Triplane, ABG_Flags:None> a;
//ArduboyG_Config    <ABG_Mode::L4_Triplane, ABG_Flags:None> a;

#include <Arduboy2.h>
#include <ArduboyTones.h>
#include "rooms.h"
#include "music.h"
#include "gfx.h"
Arduboy2 arduboy;
//Arduboy2Base arduboy;
ArduboyTones sound(arduboy.audio.enabled);

unsigned char * screenBuffer; // ***************************************
int frameNumber = 0; // *********************************************

// Global Variables

int xy1[6][6];
int xy2[6][6];
int xy3[6][6];

uint8_t screen[76];

bool firstRun = true;
bool start;
bool soundOn = true;
bool rBlock;
bool lBlock;
bool dBlock;
bool uBlock;
bool zBlock;
bool port;
bool touchdown;
bool land = true;
bool spike;
bool press;
bool heal;

int anim3;
int anim4;
int anim15;
int newRoomNo = 1;
int roomNo;

bool telLines[81];
bool halfDone = false;

int portTimer;

double gravity = 1.33;

// Player Variables
int direction = 1;
int playerX = 25; // 49, 10
int playerY = 25; // 49, 10
int playerZ = 0; // 60, 20
int Xvel;
int Yvel;
double Zvel;
bool jumpPressed;
int detectX = 25;
int detectY = 25;
int pX; // player screen cords
int pY;
double pZ;
int drawOrder = 0;
int playerLife = 100;
int deathTimer = 0;
bool dead = false;
bool win = false;
int deathPause = 500;
int winPause = 500;

// Bug Variables
int bugExist = 0;
int bugDirection = 1;
int bugX = 25; // position in virtual space
int bugDetX = 25; // position in detection matrix
int bugScrX; // screen cords
int bugY = 25;
int bugDetY = 25;
int bugScrY;
int bugDrawOrder;

// Blip Variables
int blipNumber = 10;
int blipX[11];
int blipY[11];

void setup()
{
  a.begin();
  arduboy.display();
  
      
  screenBuffer = a.getBuffer(); //************************************
  a.startGray(); //***********************************************
}

void loop()
{
  if(!a.nextFrame()) // *********************************************
    return; // **************************************************
  //a.waitForNextPlane();
  //if(a.needsUpdatw())

if(!start && !dead && !win)
  {
    if (firstRun) // startup
    {
      // Title Screen
    }

    // Menu
    firstRun=false;
    arduboy.setCursor(32,7);
    arduboy.print("KUBE");

    arduboy.setCursor(65,50);
    arduboy.print("start game");

    Sprites::drawOverwrite(28, 21, kube1, frameNumber);
    Sprites::drawOverwrite(89, 9, speaker1, frameNumber);

    if(soundOn){Sprites::drawOverwrite(108, 9, sound1, frameNumber);}
    
    render();

    if (arduboy.pressed(RIGHT_BUTTON))
    {
      soundOn = true;
    }

    if (arduboy.pressed(LEFT_BUTTON))
    {
      soundOn = false;
    }

    if (arduboy.pressed(A_BUTTON))
    {
      start = true;
      if (soundOn){sound.tones(startTune);}
      arduboy.delayShort(500);
      newGame();
    }

    if (arduboy.pressed(B_BUTTON))
    {
      start = true;
      if (soundOn){sound.tones(startTune);}
      arduboy.delayShort(500);
      newGame();
    }
  }

  if(dead)
  {
    deathPause--;
    Sprites::drawOverwrite(48, 16, gameOver1, frameNumber);
    render();
    if (deathPause == 0){resetVariables();}
  }

  if(win)
  {
    winPause--;

    Sprites::drawOverwrite(48, 20, rainbowS1, frameNumber);

    render();

    if (winPause == 0){resetVariables();}
  }

  if(start && !dead && !win) // Main game loop
  {
    update();
    render();
  }
}

void animations()
{
  anim3++;if(anim3==4){anim3=1;}

  if (anim15==15){anim4++;if(anim4==5){anim4=1;}}

  anim15++;if(anim15==16){anim15=1;}

  if (portTimer > 0){portTimer--;}
}

void update()
{
  animations();
  calcPlayer();
  calcRoom();
  if (deathTimer > 0) {calcBlip();}
  if (bugExist != 0) {calcBug();}
  if (portTimer == 0) {getInput();}
  if (portTimer < 3) {movePlayer();}
}

void render()
{
  if(!start && !dead && !win)
  {
    if(++frameNumber==3) frameNumber=0;
  }

  if(dead || win)
  {
    if(++frameNumber==3) frameNumber=0;
  }

  if(start && !dead && !win)
  {
    if (portTimer==0 && deathTimer == 0)
    {
      Sprites::drawOverwrite(7, 16, lifeBar1, frameNumber);
      int lifeBar = playerLife/4;
      if (playerLife>0){arduboy.fillRect(10,45-lifeBar,2,lifeBar,1);}
    }

    Sprites::drawOverwrite(24, -1, background1, frameNumber);

    switch(roomNo){
      case 2:
        Sprites::drawExternalMask(76, 13, windowR1, windowRMask, frameNumber, 0);
        break;
      case 6:
        Sprites::drawExternalMask(36, 13, window1, windowMask, frameNumber, 0);
        break;
      case 9:
        Sprites::drawExternalMask(76, 13, windowR1, windowRMask, frameNumber, 0);
        break;
      case 15:
        Sprites::drawExternalMask(76, 13, windowR1, windowRMask, frameNumber, 0);
        break;
      case 16:
        Sprites::drawExternalMask(36, 13, window1, windowMask, frameNumber, 0);
        break;
      case 18:
        Sprites::drawExternalMask(36, 13, window1, windowMask, frameNumber, 0);
        Sprites::drawExternalMask(76, 13, windowR1, windowRMask, frameNumber, 0);
        break;
      case 19:
        Sprites::drawExternalMask(36, 13, window1, windowMask, frameNumber, 0);
        break;
      case 20:
        Sprites::drawExternalMask(36, 13, window1, windowMask, frameNumber, 0);
        break;
      default:
        break;
    }

    fillBackground();

    if (deathTimer > 0){drawBlip();}

    if (portTimer>0){teleport();}
  }

  if(++frameNumber==3) frameNumber=0; // *********************************************
}

void drawBlip()
{
  for (int i = 0; blipNumber > i; i ++)
  {
    Sprites::drawExternalMask(blipX[i], blipY[i], blip1, blipMask, frameNumber, 0);
  }
}

void spawnBug()
{
  if (bugExist == 0)
  {
    bugExist = 1;
    //bugDirection = rand() % 4 + 1;
    bugDirection = 4;
    bugX = 25;
    bugDetX = 25;
    bugY = 25;
    bugDetY = 25;

    bugScrX = bugX/3;
    bugScrY = bugY/3;
  }
}

void calcBlip()
{
  int random;
  for (int i = 0; blipNumber > i; i++)
  {
    random = rand() % 4 + 1;
    if (random == 1){blipX[i] = blipX[i]+1;}
    if (random == 2){blipX[i] = blipX[i]-1;}
    if (random == 3){blipY[i] = blipY[i]+1;}
    if (random == 4){blipY[i] = blipY[i]-1;}
  }
}

void calcBug()
{
  if (bugDirection == 1 && bugDetX < 50)
  {
    if (xy1[(bugDetX+5)/10][bugDetY/10]!=0){bugDirection = 3;if (soundOn){sound.tones(bumpTune);}}else{bugDetX++;bugX=bugX+2;bugY=bugY+1;} // block colission detection
  }

  if (bugDirection == 2 && bugDetX > 2)
  {
    if (xy1[(bugDetX-5)/10][bugDetY/10]!=0){bugDirection = 4;if (soundOn){sound.tones(bumpTune);}}else{bugDetX--;bugX=bugX-2;bugY=bugY-1;}
  }

  if (bugDirection == 3 && bugDetY < 50)
  {
    if (xy1[bugDetX/10][(bugDetY+5)/10]!=0){bugDirection = 2;if (soundOn){sound.tones(bumpTune);}}else{bugDetY++;bugX=bugX-2;bugY=bugY+1;}
  }

  if (bugDirection == 4 && bugDetY > 0)
  {
    if (xy1[bugDetX/10][(bugDetY-5)/10]!=0){bugDirection = 1;if (soundOn){sound.tones(bumpTune);}}else{bugDetY--;bugX=bugX+2;bugY=bugY-1;}
  }

  if (bugDirection == 1 & bugDetX > 47){bugDirection=3;if (soundOn){sound.tones(bumpTune);}}
  if (bugDirection == 2 & bugDetX < 3){bugDirection=4;if (soundOn){sound.tones(bumpTune);}}
  if (bugDirection == 3 & bugDetY > 47){bugDirection=2;if (soundOn){sound.tones(bumpTune);}}
  if (bugDirection == 4 & bugDetY < 3){bugDirection=1;if (soundOn){sound.tones(bumpTune);}}

  bugScrX = bugX/3;
  bugScrY = bugY/3;

  bugScrX = bugScrX + 48; // position ajustmant for screen cords
  bugScrY = bugScrY + 22;

  if (playerZ <19)
  {
    Rect playerCol(detectX, detectY, 10, 10);
    Rect bugCol(bugDetX,bugDetY, 10, 10);
    if (arduboy.collide(playerCol, bugCol))
    {
      playerLife--;
      if (soundOn&&deathTimer==0){sound.tones(damageTune);}
    }
  }

  int bugDrawOrderMatrix[5][5] = {
    {0, 1, 3, 6, 10},
    {2, 4, 7, 11, 15},
    {5, 8, 12, 16, 19},
    {9, 13, 17, 20, 22},
    {14, 18, 21, 23, 24}
  };
  
  int xCalc = bugDetX / 10;
  int yCalc = bugDetY / 10;
  
  bugDrawOrder = bugDrawOrderMatrix[xCalc][yCalc];

}

void portal()
{
  int xCalc = detectX / 10;
  int yCalc = detectY / 10;

  if (portTimer == 0) {
    portTimer = 100;
  }

  if (portTimer > 0) {
    port = true;
  }

  if (portTimer == 50 && port) {
    port = false;

    switch (roomNo) {
      case 1:
        newRoomNo = 2;
        break;
      case 2:
        newRoomNo = 3;
        break;
      case 3:
        newRoomNo = 4;
        break;
      case 4:
        newRoomNo = 5;
        break;
      case 5:
        newRoomNo = 6;
        break;
      case 6:
        newRoomNo = 7;
        break;
      case 7:
        newRoomNo = 8;
        break;
      case 8:
        newRoomNo = 9;
        break;
      case 9:
        if (xCalc == 1 && yCalc == 3) {
            newRoomNo = 14;
        } else if (xCalc == 4 && yCalc == 1) {
            newRoomNo = 10;
        }
        break;
      case 10:
        newRoomNo = 11;
        break;
      case 11:
        newRoomNo = 12;
        break;
      case 12:
        newRoomNo = 13;
        break;
      case 13:
        newRoomNo = 17;
        break;
      case 14:
        if (xCalc == 4 && yCalc == 3) {
            newRoomNo = 15;
        } else {
            newRoomNo = 16;
        }
        break;
      case 15:
        newRoomNo = 13;
        break;
      case 16:
        newRoomNo = 14;
        break;
      case 17:
        newRoomNo = 18;
        break;
      case 18:
        if (xCalc == 0 && yCalc == 4) {
            newRoomNo = 7;
        } else {
            newRoomNo = 19;
        }
        break;
      case 19:
        newRoomNo = 20;
        break;
      case 20:
        if (xCalc == 0 && yCalc == 1) {
            newRoomNo = 1;
        } else {
            newRoomNo = 99;
        }
        break;
    }

    flipRoom();
  }
}

void calcRoom()
{
  if (port){portal();}

  if(press){buttonPress();}

  if (bugExist == 0)
  {
    switch(roomNo){
      case 2:
      case 5:
      case 8:
      case 11:
      case 12:
      case 15:
      case 19:
        spawnBug();
      default:
      break;
    }
  }
}

void teleport()
{
  if (portTimer==100)
  {
    halfDone = false;
    if (soundOn){sound.tones(teleTune);}
  }

  if (portTimer==50)
  {
    halfDone = true;
  }

  int r = rand ()% 80 + 1;

  if (halfDone == false)
  {
    if (telLines[r] == false)
    {
      telLines[r] = true;
    }
  }

  if (halfDone)
  {
    if (telLines[r] == true)
    {
      telLines[r] = false;
    }
  }

  for (int i = 0; 80 > i; i ++)
  {
    if (telLines[i]==true)
    {
      arduboy.drawFastVLine(i+24, 0, 64,0);
    }
  }
}

void buttonPress()
{
  press = false;
  if (soundOn){sound.tones(pressTune);}
  int xCalc = detectX/10;
  int yCalc = detectY/10;

  if (roomNo==10)
  {
    screen[50] = 1;
    screen[51] = 1;
    screen[53] = 1;
    screen[56] = 1;
    screen[60] = 2;
  }

  if (roomNo==12)
  {
    screen[50] = 1;
    screen[20] = 1;
    screen[10] = 1;
    screen[24] = 2;
  }

  if (roomNo==18)
  {
    if (xCalc == 2 && yCalc == 4)
    {
      screen[19] = 1;
      screen[14] = 2;
      screen[39] = 0; xy2[4][0]=0;
      screen[64] = 0; xy3[4][0]=0;
    }
    if (xCalc == 4 && yCalc == 2)
    {
      screen[21] = 1;
      screen[10] = 2;
      screen[35] = 0; xy2[0][4]=0;
      screen[60] = 0; xy3[0][4]=0;
    }
  }

  if (roomNo==20)
  {
    if (xCalc == 3 && yCalc == 2)
    {
      screen[17] = 1;
      screen[52] = 1;
      screen[55] = 1;
      screen[21] = 6; xy1[4][2]=1;
      screen[43] = 6; xy2[4][1]=1;
      screen[64] = 6; xy3[4][0]=1;
    }
    if (xCalc == 1 && yCalc == 2)
    {
      screen[7] = 1;
      screen[1] = 2; xy1[0][1] = 1;
    }
  }
}

void flipRoom()
{
  bugExist = 0;
  Zvel = 3;

  arduboy.clear();

  // Initialize arrays
  memset(xy1, 0, sizeof(xy1));
  memset(xy2, 0, sizeof(xy2));
  memset(xy3, 0, sizeof(xy3));
  memset(screen, 0, sizeof(screen));

  if (newRoomNo == 99) {
    victory();
    return;
  }

  roomNo = newRoomNo;

  // Array of roomType pointers
  const uint8_t* roomTypes[] = {
    roomType1, roomType2, roomType3, roomType4, roomType5,
    roomType6, roomType7, roomType8, roomType9, roomType10,
    roomType11, roomType12, roomType13, roomType14, roomType15,
    roomType16, roomType17, roomType18, roomType19, roomType20
  };

  if (newRoomNo >= 1 && newRoomNo <= 20) {
    // Adjust for zero-based index
    const uint8_t* roomTypePtr = roomTypes[newRoomNo - 1];
    int roomRead = 0;
    
    for (int i = 0; i < 75; ++i) {
      int test = pgm_read_byte(&roomTypePtr[roomRead]);
      int type = pgm_read_byte(&roomTypePtr[roomRead + 1]);
      if (test == i) {
        screen[i] = type;
        roomRead += 2;
      }
    }
  }
}

void newGame()
{
  flipRoom();
}

void calcPlayer()
{
  int drawOrderMatrix[5][5] = {
    {0, 1, 3, 6, 10},
    {2, 4, 7, 11, 15},
    {5, 8, 12, 16, 19},
    {9, 13, 17, 20, 22},
    {14, 18, 21, 23, 24}
  };
  
  int xCalc = detectX / 10;
  int yCalc = detectY / 10;
  
  drawOrder = drawOrderMatrix[xCalc][yCalc];


  // if level 2 drawOrder + 25, if level 3 drawOrder + 50
  if (playerZ > 19 && playerZ < 40)
  {
    drawOrder = drawOrder+25;
  }
  if (playerZ > 39)
  {
    drawOrder = drawOrder+50;
  }  

  if (playerZ < 20) // on ground velvel
  {
    if (xy1[(detectX+5)/10][detectY/10]!=0){rBlock=true; Xvel = 0;}else{rBlock=false;} // block colission detection
    if (xy1[(detectX-5)/10][detectY/10]!=0){lBlock=true; Xvel = 0;}else{lBlock=false;}
    if (xy1[detectX/10][(detectY+5)/10]!=0){dBlock=true; Yvel = 0;}else{dBlock=false;}
    if (xy1[detectX/10][(detectY-5)/10]!=0){uBlock=true; Yvel = 0;}else{uBlock=false;}
    if (xy2[detectX/10][(detectY)/10]!=0){zBlock=true;}else{zBlock=false;}
    spike = false;
  }

  if (playerZ > 19 && playerZ <40) // if player above first block height
  {
    rBlock=false;// reset blocking from lower level
    lBlock=false;
    dBlock=false;
    uBlock=false;
    zBlock=false;

    if (xy2[(detectX+5)/10][detectY/10]!=0){rBlock=true; Xvel = 0;}else{rBlock=false;} // block colission detection
    if (xy2[(detectX-5)/10][detectY/10]!=0){lBlock=true; Xvel = 0;}else{lBlock=false;}
    if (xy2[detectX/10][(detectY+5)/10]!=0){dBlock=true; Yvel = 0;}else{dBlock=false;}
    if (xy2[detectX/10][(detectY-5)/10]!=0){uBlock=true; Yvel = 0;}else{uBlock=false;}
    if (xy3[detectX/10][(detectY)/10]!=0){zBlock=true;}else{zBlock=false;}

    if (xy1[detectX/10][(detectY)/10]==2){port=true;}else{port=false;}

    if (xy1[detectX/10][(detectY)/10]==4){press=true;}else{press=false;}

    if (xy1[detectX/10][(detectY)/10]==5){heal=true;}else{heal=false;}

    spike=false;
    if (xy1[detectX/10][(detectY)/10]==3){spike=true;}
  }

  if (playerZ > 39 && playerZ <60) // above second block
  {
    rBlock=false;// reset blocking from lower level
    lBlock=false;
    dBlock=false;
    uBlock=false;
    zBlock=false;

    if (xy3[(detectX+5)/10][detectY/10]!=0){rBlock=true; Xvel = 0;}else{rBlock=false;} // block colission detection
    if (xy3[(detectX-5)/10][detectY/10]!=0){lBlock=true; Xvel = 0;}else{lBlock=false;}
    if (xy3[detectX/10][(detectY+5)/10]!=0){dBlock=true; Yvel = 0;}else{dBlock=false;}
    if (xy3[detectX/10][(detectY-5)/10]!=0){uBlock=true; Yvel = 0;}else{uBlock=false;}

    if (xy2[detectX/10][(detectY)/10]==2){port=true;}else{port=false;}

    if (xy2[detectX/10][(detectY)/10]==4){press=true;}else{press=false;}

    if (xy1[detectX/10][(detectY)/10]==5){heal=true;}else{heal=false;}

    spike=false;
    if (xy2[detectX/10][(detectY)/10]==3){spike=true;}
  }

  if (playerZ > 59) // above third block
  {
    rBlock=false;// reset blocking from lower level
    lBlock=false;
    dBlock=false;
    uBlock=false;
    zBlock=false;

    if (xy3[detectX/10][(detectY)/10]==2){port=true;}else{port=false;}

    if (xy3[detectX/10][(detectY)/10]==4){press=true;}else{press=false;}

    if (xy3[detectX/10][(detectY)/10]==5){heal=true;}else{heal=false;}

    spike=false;
    if (xy3[detectX/10][(detectY)/10]==3){spike=true;}
  }

  if (playerZ > 65) // above third block
  {
    port=false;
    spike=false;
    press=false;
    heal=false;
  }

  pX = playerX/3; // distance conversion
  pY = playerY/3;
  pZ = playerZ/3;

  pX = pX + 48; // position ajustmant for screen cords
  pY = pY + 22;

  if (spike){playerLife--;if (soundOn&&deathTimer==0){sound.tones(damageTune);}}


  if (playerLife == 0)
  {
    deathTimer = 300;
    if(soundOn){sound.tones(deathTune);}
    for (int i = 0; blipNumber > i; i++)
    {
      blipX[i] = pX + 8;
      blipY[i] = pY + 8;
    }
  }

  if (deathTimer > 1){deathTimer--;}
  if (deathTimer == 1){gameOver();}

  if (heal&&playerLife<100){playerLife++; if(soundOn){sound.tones(healTune);}}
}

void gameOver()
{
  dead = true;
}

void getInput()
{

  if (arduboy.pressed(RIGHT_BUTTON)&& anim3==2)
  {
    if (Xvel < 2) // ammount of slide
    {
      Xvel=Xvel + 1;
    }
  }
  if (arduboy.notPressed(RIGHT_BUTTON) && Xvel > 0) // friction
  {
    Xvel--;
  }

  if (arduboy.pressed(LEFT_BUTTON)&& anim3==2)
  {
    if (Xvel > -2)
    {
      Xvel=Xvel - 1;
    }
  }
  if (arduboy.notPressed(LEFT_BUTTON) && Xvel < 0) // friction
  {
    Xvel++;
  }

  if (arduboy.pressed(DOWN_BUTTON)&& anim3==2)
  {
    if (Yvel < 2)
    {
      Yvel=Yvel + 1;
    }
  }
  if (arduboy.notPressed(DOWN_BUTTON) && Yvel > 0) // friction
  {
    Yvel--;
  }

  if (arduboy.pressed(UP_BUTTON)&& anim3==2)
  {
    if (Yvel > -2)
    {
      Yvel=Yvel - 1;
    }
  }
  if (arduboy.notPressed(UP_BUTTON) && Yvel < 0) // friction
  {
    Yvel++;
  }

  if (arduboy.pressed(A_BUTTON) && jumpPressed == false && land == true && zBlock == false || arduboy.pressed(B_BUTTON) && jumpPressed == false && land == true && zBlock == false)
  {
    jumpPressed = true;
    Zvel = 11;
    land = false;
    touchdown = false;
    if (soundOn){sound.tones(jumpTune);}
  }
  if (arduboy.notPressed(A_BUTTON))
  {
    jumpPressed = false;
  }  
}

void movePlayer()
{
  if (Xvel > 0 && rBlock == false && detectX < 49)
  {
    detectX++;
    playerX = playerX + 2;
    playerY = playerY + 1;
  }

  if (Xvel < 0  && lBlock == false && detectX > 0)
  {
    detectX--;
    playerX = playerX - 2;
    playerY = playerY - 1;
  }

  if (Yvel > 0 && dBlock == false && detectY < 49)
  {
    detectY++;
    playerX = playerX - 2;
    playerY = playerY + 1;
  }

  if (Yvel < 0 && uBlock == false && detectY > 0)
  {
    detectY--;
    playerX = playerX + 2;
    playerY = playerY - 1;
  }

  if (Zvel > 0) // apply jump to player
  {
    Zvel = Zvel - 1; // slow down over time
    playerZ = playerZ + Zvel;
  }
  if (Zvel < 0){Zvel=0;}

  int xCalc = detectX/10;
  int yCalc = detectY/10;

  if (playerZ > 0 && playerZ < 20) // below lower block
  {
    playerZ = playerZ - gravity; // apply gravity
    land = false;
    touchdown = false;
  }

  if (playerZ==0)
  {
    land = true;
    if (touchdown == false)
    {
      if (soundOn){sound.tones(landTune);}
      touchdown = true;
    }
    Zvel=0;
    port = false;
  }

  if (playerZ > 19 && playerZ < 40) // above lower block
  {
    playerZ = playerZ - gravity; // apply gravity
    land = false;
    if (playerZ < 20 && xy1[xCalc][yCalc] != 0)
    {
      land = true;
      if (touchdown == false)
      {
        if (soundOn){sound.tones(landTune);}
        touchdown = true;
      }
      playerZ = 20;
      Zvel=0;
    }    
  }

  if (playerZ > 39 && playerZ < 60)
  {
    playerZ = playerZ - gravity; // apply gravity
    land = false;
    if (playerZ < 40 && xy2[xCalc][yCalc] != 0)
    {
      land = true;
      if (touchdown == false)
      {
        if (soundOn){sound.tones(landTune);}
        touchdown = true;
      }
      playerZ = 40;
      Zvel=0;
    }    
  }

  if (playerZ > 59)
  {
    playerZ = playerZ - gravity; // apply gravity
    land = false;
    if (playerZ < 60 && xy3[xCalc][yCalc] != 0)
    {
      land = true;
      if (touchdown == false)
      {
        if (soundOn){sound.tones(landTune);}
        touchdown = true;
      }
      playerZ = 60;
      Zvel=0;
    }    
  }
}

void fillBackground()
{
  int xDraw = 56;
  int yDraw = 15;
  int x;
  int y;

  for(int i = 0; 25 > i ; i++)
  {
    if (i == drawOrder)
    {
      drawPlayer();
    }

    if (bugExist == 1&&i == bugDrawOrder)
    {
      Sprites::drawExternalMask(bugScrX, bugScrY, bug1, bugMask, frameNumber, 0);
    }

    if(i==0){x=0;y=0;}
    if(i==1){xDraw=xDraw-8;yDraw=yDraw+4;x=0;y=1;} // position block depending on i zig zag scan
    if(i==2){xDraw=xDraw+16;x=1;y=0;}
    if(i==3){xDraw=xDraw-24;yDraw=yDraw+4;x=0;y=2;}
    if(i==4){xDraw=xDraw+16;x=1;y=1;}
    if(i==5){xDraw=xDraw+16;x=2;y=0;}
    if(i==6){xDraw=xDraw-40;yDraw=yDraw+4;x=0;y=3;}
    if(i==7){xDraw=xDraw+16;x=1;y=2;}
    if(i==8){xDraw=xDraw+16;x=2;y=1;}
    if(i==9){xDraw=xDraw+16;x=3;y=0;}
    if(i==10){xDraw=xDraw-56;yDraw=yDraw+4;x=0;y=4;}
    if(i==11){xDraw=xDraw+16;x=1;y=3;}
    if(i==12){xDraw=xDraw+16;x=2;y=2;}
    if(i==13){xDraw=xDraw+16;x=3;y=1;}
    if(i==14){xDraw=xDraw+16;x=4;y=0;}
    if(i==15){xDraw=xDraw-56;yDraw=yDraw+4;x=1;y=4;}
    if(i==16){xDraw=xDraw+16;x=2;y=3;}
    if(i==17){xDraw=xDraw+16;x=3;y=2;}
    if(i==18){xDraw=xDraw+16;x=4;y=1;}
    if(i==19){xDraw=xDraw-40;yDraw=yDraw+4;x=2;y=4;}
    if(i==20){xDraw=xDraw+16;x=3;y=3;}
    if(i==21){xDraw=xDraw+16;x=4;y=2;}
    if(i==22){xDraw=xDraw-24;yDraw=yDraw+4;x=3;y=4;}
    if(i==23){xDraw=xDraw+16;x=4;y=3;}
    if(i==24){xDraw=xDraw-8;yDraw=yDraw+4;x=4;y=4;}

    if (screen[i] != 0)
    {
      xy1[x][y] = screen[i];
      if (screen[i] == 1)
      {
        Sprites::drawExternalMask(xDraw, yDraw, block1, blockMask, frameNumber, 0);
      }
      if (screen[i] == 2)
      {
        if (anim4==1){Sprites::drawExternalMask(xDraw, yDraw, teleAnim1_1, blockMask, frameNumber, 0);}
        if (anim4==2){Sprites::drawExternalMask(xDraw, yDraw, teleAnim2_1, blockMask, frameNumber, 0);}
        if (anim4==3){Sprites::drawExternalMask(xDraw, yDraw, teleAnim3_1, blockMask, frameNumber, 0);}
        if (anim4==4){Sprites::drawExternalMask(xDraw, yDraw, teleAnim2_1, blockMask, frameNumber, 0);}
      }
      if (screen[i] == 3)
      {
        Sprites::drawExternalMask(xDraw, yDraw, spikes1, spikesMask, frameNumber, 0);
      }
      if (screen[i] == 4)
      {
        Sprites::drawExternalMask(xDraw, yDraw, button1, buttonMask, frameNumber, 0);
      }
      if (screen[i] == 5)
      {
        Sprites::drawExternalMask(xDraw, yDraw, healS1, healSMask, frameNumber, 0);
      }
      if (screen[i] == 6)
      {
        Sprites::drawExternalMask(xDraw, yDraw, heal1, healMask, frameNumber, 0);
      }
    }
  }

  x=0;
  y=0;
  xDraw = 56;
  yDraw = 8;

  for(int i = 25; 50 > i ; i++)
  {
    if (i == drawOrder)
    {
      drawPlayer();
    }

    if(i==25){x=0;y=0;}
    if(i==26){xDraw=xDraw-8;yDraw=yDraw+4;x=0;y=1;} // position block depending on i zig zag scan
    if(i==27){xDraw=xDraw+16;x=1;y=0;}
    if(i==28){xDraw=xDraw-24;yDraw=yDraw+4;x=0;y=2;}
    if(i==29){xDraw=xDraw+16;x=1;y=1;}
    if(i==30){xDraw=xDraw+16;x=2;y=0;}
    if(i==31){xDraw=xDraw-40;yDraw=yDraw+4;x=0;y=3;}
    if(i==32){xDraw=xDraw+16;x=1;y=2;}
    if(i==33){xDraw=xDraw+16;x=2;y=1;}
    if(i==34){xDraw=xDraw+16;x=3;y=0;}
    if(i==35){xDraw=xDraw-56;yDraw=yDraw+4;x=0;y=4;}
    if(i==36){xDraw=xDraw+16;x=1;y=3;}
    if(i==37){xDraw=xDraw+16;x=2;y=2;}
    if(i==38){xDraw=xDraw+16;x=3;y=1;}
    if(i==39){xDraw=xDraw+16;x=4;y=0;}
    if(i==40){xDraw=xDraw-56;yDraw=yDraw+4;x=1;y=4;}
    if(i==41){xDraw=xDraw+16;x=2;y=3;}
    if(i==42){xDraw=xDraw+16;x=3;y=2;}
    if(i==43){xDraw=xDraw+16;x=4;y=1;}
    if(i==44){xDraw=xDraw-40;yDraw=yDraw+4;x=2;y=4;}
    if(i==45){xDraw=xDraw+16;x=3;y=3;}
    if(i==46){xDraw=xDraw+16;x=4;y=2;}
    if(i==47){xDraw=xDraw-24;yDraw=yDraw+4;x=3;y=4;}
    if(i==48){xDraw=xDraw+16;x=4;y=3;}
    if(i==49){xDraw=xDraw-8;yDraw=yDraw+4;x=4;y=4;}

    if (screen[i] != 0)
    {
      xy2[x][y] = screen[i];
      if (screen[i] == 1)
      {
        Sprites::drawExternalMask(xDraw, yDraw, block1, blockMask, frameNumber, 0);
      }
      if (screen[i] == 2)
      {
        if (anim4==1){Sprites::drawExternalMask(xDraw, yDraw, teleAnim1_1, blockMask, frameNumber, 0);}
        if (anim4==2){Sprites::drawExternalMask(xDraw, yDraw, teleAnim2_1, blockMask, frameNumber, 0);}
        if (anim4==3){Sprites::drawExternalMask(xDraw, yDraw, teleAnim3_1, blockMask, frameNumber, 0);}
        if (anim4==4){Sprites::drawExternalMask(xDraw, yDraw, teleAnim2_1, blockMask, frameNumber, 0);}
      }
      if (screen[i] == 3)
      {
        Sprites::drawExternalMask(xDraw, yDraw, spikes1, spikesMask, frameNumber, 0);
      }
      if (screen[i] == 4)
      {
        Sprites::drawExternalMask(xDraw, yDraw, button1, buttonMask, frameNumber, 0);
      }
      if (screen[i] == 5)
      {
        Sprites::drawExternalMask(xDraw, yDraw, healS1, healSMask, frameNumber, 0);
      }
      if (screen[i] == 6)
      {
        Sprites::drawExternalMask(xDraw, yDraw, heal1, healMask, frameNumber, 0);
      }
    }
  }

  x=0;
  y=0;
  xDraw = 56;
  yDraw = 1;

  for(int i = 50; 75 > i ; i++)
  {
    if (i == drawOrder)
    {
      drawPlayer();
    }
    if(i==50){x=0;y=0;}
    if(i==51){xDraw=xDraw-8;yDraw=yDraw+4;x=0;y=1;} // position block depending on i zig zag scan
    if(i==52){xDraw=xDraw+16;x=1;y=0;}
    if(i==53){xDraw=xDraw-24;yDraw=yDraw+4;x=0;y=2;}
    if(i==54){xDraw=xDraw+16;x=1;y=1;}
    if(i==55){xDraw=xDraw+16;x=2;y=0;}
    if(i==56){xDraw=xDraw-40;yDraw=yDraw+4;x=0;y=3;}
    if(i==57){xDraw=xDraw+16;x=1;y=2;}
    if(i==58){xDraw=xDraw+16;x=2;y=1;}
    if(i==59){xDraw=xDraw+16;x=3;y=0;}
    if(i==60){xDraw=xDraw-56;yDraw=yDraw+4;x=0;y=4;}
    if(i==61){xDraw=xDraw+16;x=1;y=3;}
    if(i==62){xDraw=xDraw+16;x=2;y=2;}
    if(i==63){xDraw=xDraw+16;x=3;y=1;}
    if(i==64){xDraw=xDraw+16;x=4;y=0;}
    if(i==65){xDraw=xDraw-56;yDraw=yDraw+4;x=1;y=4;}
    if(i==66){xDraw=xDraw+16;x=2;y=3;}
    if(i==67){xDraw=xDraw+16;x=3;y=2;}
    if(i==68){xDraw=xDraw+16;x=4;y=1;}
    if(i==69){xDraw=xDraw-40;yDraw=yDraw+4;x=2;y=4;}
    if(i==70){xDraw=xDraw+16;x=3;y=3;}
    if(i==71){xDraw=xDraw+16;x=4;y=2;}
    if(i==72){xDraw=xDraw-24;yDraw=yDraw+4;x=3;y=4;}
    if(i==73){xDraw=xDraw+16;x=4;y=3;}
    if(i==74){xDraw=xDraw-8;yDraw=yDraw+4;x=4;y=4;}

    if (screen[i] != 0)
    {
      xy3[x][y] = screen[i];
      if (screen[i] == 1)
      {
        Sprites::drawExternalMask(xDraw, yDraw, block1, blockMask, frameNumber, 0);
      }
      if (screen[i] == 2)
      {
        if (anim4==1){Sprites::drawExternalMask(xDraw, yDraw, teleAnim1_1, blockMask, frameNumber, 0);}
        if (anim4==2){Sprites::drawExternalMask(xDraw, yDraw, teleAnim2_1, blockMask, frameNumber, 0);}
        if (anim4==3){Sprites::drawExternalMask(xDraw, yDraw, teleAnim3_1, blockMask, frameNumber, 0);}
        if (anim4==4){Sprites::drawExternalMask(xDraw, yDraw, teleAnim2_1, blockMask, frameNumber, 0);}
      }
      if (screen[i] == 3)
      {
        Sprites::drawExternalMask(xDraw, yDraw, spikes1, spikesMask, frameNumber, 0);
      }
      if (screen[i] == 4)
      {
        Sprites::drawExternalMask(xDraw, yDraw, button1, buttonMask, frameNumber, 0);
      }
      if (screen[i] == 5)
      {
        Sprites::drawExternalMask(xDraw, yDraw, healS1, healSMask, frameNumber, 0);
      }
      if (screen[i] == 6)
      {
        Sprites::drawExternalMask(xDraw, yDraw, heal1, healMask, frameNumber, 0);
      }
    }
  }
    if (playerZ > 59)
    {
      drawPlayer();
    }
}

void drawPlayer()
{
 if(deathTimer == 0 && portTimer == 0){Sprites::drawExternalMask(pX, pY-pZ, playerM1, playerMMask, frameNumber, 0);}
}

void victory()
{
  win = true;
  if (soundOn){sound.tones(winTune);}
}

void resetVariables()
{
  newRoomNo = 1;
  for (int i = 0; 81 > i; i++){telLines[i] = 0;}
  portTimer = 0;

  // Player Variables
  direction = 1;
  playerX = 25; // 49 ??
  playerY = 25; // 49
  playerZ = 0; // 30
  Xvel = 0;
  Yvel = 0;
  Zvel = 0;
  jumpPressed = false;
  detectX = 25;
  detectY = 25;
  drawOrder = 0;
  playerLife = 100;
  deathTimer = 0;
  spike = false;
  dead = false;
  win = false;
  deathPause = 500;
  winPause = 500;
  start = false;
}
