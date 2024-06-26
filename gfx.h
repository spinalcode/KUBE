const uint8_t PROGMEM blip1[] = {
4, 8,
0x03, 0x01, 0x00, 0x00,

0x01, 0x01, 0x00, 0x00, 

0x01, 0x00, 0x00, 0x00, 
};

const uint8_t PROGMEM blipMask[] = {
0x03, 0x03, 0x00, 0x00, 
};

const uint8_t PROGMEM speaker1[] = {
32, 13,
0x40, 0xe0, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xfc, 0xfe, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xe0, 0x40, 
0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x07, 0x0f, 0x1f, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 

0x40, 0xe0, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xfc, 0xfe, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xe0, 0x40, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x07, 0x0f, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

0x40, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x40, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const uint8_t PROGMEM sound1[] = {
7, 13,
0xf0, 0x00, 0x04, 0xf8, 0x01, 0x02, 0xfc, 
0x01, 0x00, 0x04, 0x03, 0x10, 0x08, 0x07, 

0x00, 0x00, 0x04, 0xf8, 0x01, 0x02, 0xfc, 
0x00, 0x00, 0x04, 0x03, 0x10, 0x08, 0x07, 

0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0xfc, 
0x00, 0x00, 0x00, 0x00, 0x10, 0x08, 0x07, 
};

const uint8_t PROGMEM kube1[] = {
31, 40,
0x00, 0x00, 0x80, 0x40, 0x20, 0x90, 0xc8, 0xe4, 0xf4, 0xf2, 0xfa, 0xfa, 0xf9, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xf9, 0xfa, 0xfa, 0xf2, 0xf4, 0xe4, 0xc8, 0x90, 0x20, 0x40, 0x80, 0x00, 0x00, 
0xf0, 0x0e, 0xe1, 0xfc, 0xff, 0x7f, 0xbf, 0x7f, 0xbf, 0x5f, 0xbf, 0x5f, 0x2f, 0x5f, 0x2f, 0x5f, 0x2f, 0x5f, 0x2f, 0x5f, 0x2f, 0x5f, 0xaf, 0x5f, 0xbf, 0x5f, 0xbe, 0x78, 0xe1, 0x0e, 0xf0, 
0x03, 0x1c, 0x60, 0x83, 0x1a, 0x71, 0xe0, 0xc1, 0x80, 0x84, 0x80, 0xc0, 0xc0, 0xe0, 0xe1, 0xe0, 0xe4, 0xe0, 0xc0, 0xc0, 0x80, 0x80, 0x84, 0xc0, 0xe0, 0x71, 0x18, 0x81, 0x62, 0x1c, 0x03, 
0x00, 0xe0, 0xe0, 0xf0, 0xf1, 0xfa, 0xfc, 0xf9, 0xf3, 0xf3, 0xe7, 0xe7, 0xe7, 0xcf, 0xcf, 0xcf, 0xcf, 0xcf, 0xe7, 0xe7, 0xe7, 0xf3, 0xf3, 0xf9, 0xfc, 0xfa, 0xf1, 0xf0, 0xe0, 0xe0, 0x00, 
0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 

0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xe0, 0xe0, 0xf0, 0xf0, 0xf0, 0xf0, 0xe8, 0xf0, 0xe8, 0xf0, 0xe8, 0xf0, 0xf0, 0xf0, 0xe0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x78, 0x1e, 0x0f, 0x17, 0x0b, 0x07, 0x0b, 0x05, 0x03, 0x05, 0x03, 0x01, 0x02, 0x01, 0x02, 0x05, 0x03, 0x05, 0x03, 0x07, 0x03, 0x07, 0x0b, 0x04, 0x10, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x10, 0x20, 0x40, 0x80, 0x80, 0x80, 0x80, 0xc0, 0xc0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xc0, 0xc0, 0x80, 0x80, 0x80, 0x80, 0x40, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 
0x00, 0xc0, 0xe0, 0xe0, 0xe0, 0xc0, 0x80, 0x80, 0x00, 0x01, 0x01, 0x01, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x01, 0x01, 0x01, 0x80, 0x80, 0xc0, 0xe0, 0xf0, 0xe0, 0xe0, 0xc0, 0x00, 
0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xfc, 0xfc, 0x3c, 0x3c, 0x3c, 0x1e, 0x1e, 0x0f, 0x0f, 0x07, 0x07, 0x03, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 

0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xe0, 0xe0, 0x60, 0x60, 0x60, 0x40, 0x00, 0x00, 0x00, 0x00, 0x60, 0x60, 0xe0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x08, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0xc0, 0xc0, 0xe0, 0xe0, 0xe0, 0xc0, 0xc0, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0xc0, 0xc0, 0xe0, 0xc0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x03, 0x03, 0x03, 0x03, 0x03, 0x01, 0x01, 0x01, 0x00, 0x00, 0x80, 0x80, 0xc0, 0xe0, 0xe0, 0xc0, 0x40, 0x00, 
0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x03, 0x07, 0x07, 0x0f, 0x0e, 0x1e, 0x1c, 0x3c, 0x3c, 0x3c, 0x3c, 0x1c, 0x1c, 0x0e, 0x0e, 0x07, 0x07, 0x03, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
};

const uint8_t PROGMEM lifeBar1[] = {
8, 32,
0xfe, 0xff, 0x07, 0x57, 0x57, 0x07, 0xff, 0xfe, 
0x57, 0xff, 0x00, 0x55, 0x55, 0x00, 0xbf, 0x17, 
0xf4, 0xfe, 0x00, 0x55, 0x55, 0x00, 0xff, 0xfd, 
0x7f, 0xff, 0xc0, 0xd5, 0xd5, 0xc0, 0xff, 0x7f, 

0xfc, 0xfe, 0x07, 0x57, 0x07, 0x07, 0x5e, 0x28, 
0x00, 0x05, 0x00, 0x55, 0x00, 0x00, 0x05, 0x00, 
0x80, 0x50, 0x00, 0x55, 0x00, 0x00, 0x50, 0xa0, 
0x3a, 0x7d, 0xc0, 0xd5, 0xc0, 0xc0, 0x7f, 0x3f, 

0x28, 0x54, 0x06, 0x06, 0x02, 0x04, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x28, 0x40, 0x80, 0x40, 0x40, 0x34, 0x0a, 
};

const uint8_t PROGMEM block1[] = {
16, 16,
0xf0, 0xf8, 0xf8, 0xfc, 0xfc, 0xfe, 0xfe, 0xff, 0xff, 0xfe, 0xfe, 0xfc, 0xfc, 0xf8, 0xf8, 0xb0, 
0x1f, 0x1f, 0x3f, 0x3f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xbf, 0x7f, 0x5f, 0x3f, 0x2f, 0x1f, 0x1a, 

0xb0, 0xf8, 0xf8, 0xfc, 0xfc, 0xfe, 0xfe, 0xff, 0xff, 0xfe, 0xfe, 0xfc, 0x7c, 0x78, 0x38, 0x30, 
0x0a, 0x1f, 0x1f, 0x3f, 0x3f, 0x7f, 0x7f, 0xff, 0x01, 0x81, 0x00, 0x40, 0x00, 0x20, 0x00, 0x10, 

0x10, 0x30, 0x38, 0x78, 0x7c, 0xfc, 0xfe, 0xfe, 0xfe, 0xfe, 0xfc, 0x7c, 0x78, 0x38, 0x30, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const uint8_t PROGMEM blockMask[] = {
0xf0, 0xf8, 0xf8, 0xfc, 0xfc, 0xfe, 0xfe, 0xff, 0xff, 0xfe, 0xfe, 0xfc, 0xfc, 0xf8, 0xf8, 0xf0, 
0x1f, 0x1f, 0x3f, 0x3f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x3f, 0x3f, 0x1f, 0x1f, 
};

const uint8_t PROGMEM button1[] = {
16, 16,
0xf0, 0xf8, 0xf8, 0xfc, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xf4, 0xf8, 0xf8, 0xb0, 
0x1f, 0x1f, 0x3f, 0x3f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xbf, 0x7f, 0x5f, 0x3f, 0x2f, 0x1f, 0x1a, 

0xf0, 0xf8, 0xf8, 0xfc, 0xfe, 0xfe, 0xff, 0xff, 0x9f, 0xcf, 0xce, 0xe6, 0x64, 0x78, 0x38, 0x30, 
0x1f, 0x1f, 0x3f, 0x3f, 0x7f, 0x7f, 0xff, 0xff, 0x01, 0x81, 0x00, 0x40, 0x00, 0x20, 0x00, 0x10, 

0x10, 0x30, 0x38, 0x64, 0x64, 0xce, 0xce, 0x9f, 0x9f, 0xce, 0xce, 0x64, 0x64, 0x38, 0x30, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const uint8_t PROGMEM buttonMask[] = {
0xf0, 0xf8, 0xf8, 0xfc, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xfc, 0xf8, 0xf8, 0xf0, 
0x1f, 0x1f, 0x3f, 0x3f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x3f, 0x3f, 0x1f, 0x1f, 
};

const uint8_t PROGMEM teleAnim1_1[] = {
16, 16,
0xf0, 0xf8, 0xf8, 0xfc, 0xfc, 0xde, 0xde, 0x8f, 0x8f, 0xde, 0xde, 0xfc, 0xfc, 0xf8, 0xf8, 0xb0, 
0x1f, 0x1f, 0x3f, 0x3f, 0x7b, 0x7f, 0xf7, 0xff, 0xff, 0xb3, 0x7f, 0x55, 0x3f, 0x29, 0x1f, 0x1a,

0xb0, 0xf8, 0xf8, 0xec, 0xcc, 0xc6, 0x86, 0x83, 0x8f, 0x9e, 0xde, 0xdc, 0x7c, 0x78, 0x38, 0x30, 
0x0a, 0x1f, 0x1f, 0x39, 0x39, 0x73, 0x73, 0xff, 0x01, 0x91, 0x00, 0x44, 0x00, 0x21, 0x00, 0x10, 

0x10, 0x30, 0x38, 0x68, 0x4c, 0xc4, 0x86, 0x82, 0x82, 0x86, 0xc4, 0x4c, 0x68, 0x38, 0x30, 0x10, 
0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const uint8_t PROGMEM teleAnim2_1[] = {
16, 16,
0xf0, 0xf8, 0xf8, 0xfc, 0xfc, 0xfe, 0xfe, 0xff, 0xff, 0xfe, 0xfe, 0xfc, 0xfc, 0xf8, 0xf8, 0xb0, 
0x1f, 0x1f, 0x3d, 0x3f, 0x7f, 0x7f, 0xf7, 0xff, 0xff, 0xab, 0x7f, 0x53, 0x3f, 0x2a, 0x1f, 0x1a, 

0xb0, 0xf8, 0xf8, 0xec, 0xec, 0xe6, 0xf6, 0xf3, 0xff, 0xfe, 0xfe, 0xfc, 0x7c, 0x78, 0x38, 0x30, 
0x0a, 0x1c, 0x1c, 0x3f, 0x3f, 0x73, 0x73, 0xff, 0x01, 0x89, 0x00, 0x42, 0x00, 0x22, 0x00, 0x10, 

0x10, 0x30, 0x38, 0x68, 0x4c, 0xe4, 0xe6, 0xf2, 0xf2, 0xe6, 0xe4, 0x4c, 0x68, 0x38, 0x30, 0x10, 
0x00, 0x00, 0x00, 0x06, 0x06, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const uint8_t PROGMEM teleAnim3_1[] = {
16, 16,
0xf0, 0xf8, 0xf8, 0xfc, 0xfc, 0xde, 0xde, 0x8f, 0x8f, 0xde, 0xde, 0xfc, 0xfc, 0xf8, 0xf8, 0xb0, 
0x1f, 0x1f, 0x3d, 0x3f, 0x7b, 0x7f, 0xff, 0xff, 0xff, 0xa7, 0x7f, 0x59, 0x3f, 0x2c, 0x1f, 0x1a, 

0xb0, 0xf8, 0xf8, 0xec, 0xcc, 0xc6, 0x86, 0x83, 0x8f, 0x9e, 0xde, 0xdc, 0x7c, 0x78, 0x38, 0x30, 
0x0a, 0x1c, 0x1c, 0x39, 0x39, 0x7f, 0x7f, 0xff, 0x01, 0x85, 0x00, 0x48, 0x00, 0x24, 0x00, 0x10, 

0x10, 0x30, 0x38, 0x68, 0x4c, 0xc4, 0x86, 0x82, 0x82, 0x86, 0xc4, 0x4c, 0x68, 0x38, 0x30, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x0c, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const uint8_t PROGMEM window1[] = {
16, 16,
0x80, 0x80, 0xc0, 0x40, 0x60, 0x20, 0xb0, 0x10, 0x18, 0x08, 0x8c, 0x24, 0x06, 0x12, 0x43, 0xff, 
0xff, 0xc2, 0x48, 0x62, 0x20, 0x30, 0x10, 0x1a, 0x08, 0x0c, 0x04, 0x06, 0x02, 0x03, 0x01, 0x01,

0x80, 0x80, 0x40, 0x40, 0x20, 0x20, 0x90, 0x10, 0x08, 0x08, 0x04, 0x24, 0x02, 0x12, 0x01, 0xff, 
0xff, 0x80, 0x48, 0x42, 0x20, 0x20, 0x10, 0x10, 0x08, 0x08, 0x04, 0x04, 0x02, 0x02, 0x01, 0x01, 

0x80, 0x00, 0x40, 0x00, 0x20, 0x00, 0x10, 0x00, 0x08, 0x00, 0x04, 0x20, 0x02, 0x00, 0x01, 0x00, 
0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const uint8_t PROGMEM windowMask[] = {
0x80, 0x80, 0xc0, 0xc0, 0xe0, 0xe0, 0xf0, 0xf0, 0xf8, 0xf8, 0xfc, 0xfc, 0xfe, 0xfe, 0xff, 0xff, 
0xff, 0xff, 0x7f, 0x7f, 0x3f, 0x3f, 0x1f, 0x1f, 0x0f, 0x0f, 0x07, 0x07, 0x03, 0x03, 0x01, 0x01, 
};

const uint8_t PROGMEM windowR1[] = {
16, 16,
0xff, 0x03, 0x12, 0x46, 0x04, 0x4c, 0x08, 0x98, 0x10, 0x30, 0xa0, 0x60, 0x40, 0xc0, 0x80, 0x80, 
0x01, 0x01, 0x03, 0x02, 0x06, 0x04, 0x0c, 0x08, 0x18, 0x14, 0x30, 0x20, 0x6a, 0x40, 0xc0, 0xff, 

0xff, 0x03, 0x12, 0x02, 0x04, 0x44, 0x08, 0x08, 0x10, 0x10, 0xa0, 0x20, 0x40, 0x40, 0x80, 0x80, 
0x01, 0x01, 0x00, 0x02, 0x00, 0x04, 0x00, 0x08, 0x00, 0x14, 0x00, 0x20, 0x08, 0x40, 0x00, 0x00, 

0x00, 0x01, 0x00, 0x02, 0x00, 0x44, 0x00, 0x08, 0x00, 0x10, 0x00, 0x20, 0x00, 0x40, 0x00, 0x80, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 
};

const uint8_t PROGMEM windowRMask[] = {
0xff, 0xff, 0xfe, 0xfe, 0xfc, 0xfc, 0xf8, 0xf8, 0xf0, 0xf0, 0xe0, 0xe0, 0xc0, 0xc0, 0x80, 0x80, 
0x01, 0x01, 0x03, 0x03, 0x07, 0x07, 0x0f, 0x0f, 0x1f, 0x1f, 0x3f, 0x3f, 0x7f, 0x7f, 0xff, 0xff, 
};

const uint8_t PROGMEM bug1[] = {
16, 16,
0xf8, 0xfc, 0xfe, 0xe6, 0xce, 0xdf, 0xdf, 0x9f, 0x9f, 0xdf, 0xdf, 0xce, 0xe6, 0xfe, 0xfc, 0x78, 
0x1f, 0x3f, 0x7f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0x55, 0xab, 0x00, 0x00, 0x40, 0x2a, 0x15, 

0xb8, 0x7c, 0xfe, 0xe6, 0xce, 0xcf, 0x9f, 0x9f, 0x9f, 0x9f, 0xcf, 0xce, 0xe6, 0xfe, 0x7c, 0x38, 
0x0a, 0x15, 0x3f, 0x7f, 0x7f, 0x55, 0xab, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 

0x10, 0x38, 0x7c, 0xc6, 0xca, 0xce, 0x9f, 0x9f, 0x9f, 0x9f, 0xce, 0xca, 0xc6, 0x7c, 0x38, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const uint8_t PROGMEM bugMask[] = {
0xf8, 0xfc, 0xfe, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xfe, 0xfc, 0xf8, 
0x1f, 0x3f, 0x7f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x7f, 0x3f, 0x1f, 
};

const uint8_t PROGMEM spikes1[] = {
16, 16,
0x00, 0x20, 0x00, 0x20, 0xc0, 0xc0, 0xc8, 0x80, 0x08, 0xe0, 0xe0, 0xc0, 0x20, 0x00, 0x20, 0x00, 
0x1f, 0x1f, 0x3e, 0x3f, 0x7f, 0x7f, 0xff, 0xfc, 0xf8, 0xbc, 0x7f, 0x5f, 0x3f, 0x2e, 0x1f, 0x1b, 

0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0x80, 0x00, 0x00, 0x60, 0xe0, 0xc0, 0x00, 0x00, 0x00, 0x00, 
0x0b, 0x1e, 0x1e, 0x3e, 0x3f, 0x7f, 0x7f, 0xf8, 0x18, 0x98, 0x0f, 0x4f, 0x06, 0x26, 0x02, 0x13, 

0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0x80, 0x00, 0x00, 0x60, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 
0x01, 0x02, 0x02, 0x06, 0x07, 0x0f, 0x0f, 0x18, 0x18, 0x08, 0x0f, 0x07, 0x06, 0x02, 0x02, 0x01, 
};

const uint8_t PROGMEM spikesMask[] = {
0x00, 0xe0, 0xfc, 0xe0, 0xc0, 0xc0, 0xf8, 0xff, 0xf8, 0xe0, 0xe0, 0xc0, 0xe0, 0xfc, 0xe0, 0x00, 
0x1f, 0x1f, 0x3f, 0x3f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x3f, 0x3f, 0x1f, 0x1f, 
};

const uint8_t PROGMEM playerM1[] = {
16, 16,
0x00, 0x40, 0x10, 0x00, 0x34, 0x78, 0xfe, 0xfc, 0x78, 0x7e, 0x10, 0x54, 0x08, 0x10, 0x40, 0x00, 
0x00, 0x02, 0x08, 0x15, 0x2c, 0x38, 0x58, 0x1a, 0x18, 0x59, 0x0c, 0x2e, 0x17, 0x08, 0x02, 0x00,

0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x78, 0x78, 0x30, 0x38, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x04, 0x18, 0x18, 0x10, 0x08, 0x18, 0x08, 0x04, 0x02, 0x00, 0x00, 0x00, 

0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x30, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x10, 0x00, 0x00, 0x08, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 
};

const uint8_t PROGMEM playerMMask[] = {
0x00, 0xc0, 0xf0, 0xf8, 0xfc, 0xfc, 0xfe, 0xfe, 0xfe, 0xfe, 0xfc, 0xfc, 0xf8, 0xf0, 0xc0, 0x00, 
0x00, 0x03, 0x0f, 0x1f, 0x3f, 0x3f, 0x7f, 0x7f, 0x7f, 0x7f, 0x3f, 0x3f, 0x1f, 0x0f, 0x03, 0x00, 
};

const uint8_t PROGMEM background1[] = {
80, 64,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xc0, 0xc0, 0xe0, 0xe0, 0xf0, 0xf0, 0xf8, 0xf8, 0xfc, 0xfc, 0x54, 0xfc, 0xfc, 0xfc, 0xf8, 0xf8, 0xf0, 0xf0, 0xe0, 0xe0, 0xc0, 0xc0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xc0, 0xc0, 0xe0, 0xe0, 0xf0, 0xf0, 0xf8, 0xf8, 0xfc, 0xfc, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x55, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xfc, 0xfc, 0xf8, 0xf8, 0xf0, 0xf0, 0xe0, 0xe0, 0xc0, 0xc0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0xe0, 0xf0, 0xf0, 0xf8, 0xf8, 0xfc, 0xfc, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xd5, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xfc, 0xfc, 0xf8, 0xf8, 0xf0, 0xf0, 0xe0, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xbf, 0xff, 0xdf, 0xff, 0xef, 0xff, 0xf7, 0xff, 0xfb, 0xff, 0xfd, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xbf, 0xff, 0xdf, 0xff, 0xef, 0xff, 0xf7, 0xff, 0xfb, 0xff, 0xfd, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0x3f, 0x3d, 0x7f, 0x7e, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x3f, 0x3f, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x03, 0x07, 0x07, 0x0f, 0x0f, 0x1f, 0x1f, 0x3f, 0x3f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x3f, 0x3f, 0x1f, 0x1f, 0x0f, 0x0f, 0x07, 0x07, 0x03, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x03, 0x07, 0x07, 0x0f, 0x0f, 0x1f, 0x1f, 0x3f, 0x3f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x3f, 0x3f, 0x1f, 0x1f, 0x0f, 0x0f, 0x07, 0x07, 0x03, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xfc, 0xf8, 0xf8, 0xf0, 0xf0, 0xe0, 0xe0, 0xc0, 0xc0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xfc, 0xfc, 0xf8, 0xf8, 0xf0, 0xf0, 0xe0, 0xe0, 0xc0, 0xc0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xfc, 0xfc, 0xf8, 0xf8, 0xf0, 0xf0, 0xe0, 0xe0, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xc0, 0xc0, 0xe0, 0xe0, 0xf0, 0xf0, 0xf8, 0xf8, 0xfc, 0xfc, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xc0, 0xc0, 0xe0, 0xe0, 0xf0, 0xf0, 0xf8, 0xf8, 0xfc, 0xfc, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0x18, 0x3c, 0x3c, 0x7e, 0x7e, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x3f, 0x3f, 0x1f, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x03, 0x07, 0x07, 0x0f, 0x0f, 0x1f, 0x1f, 0x3f, 0x3f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x3f, 0x3f, 0x1f, 0x1f, 0x0f, 0x0f, 0x07, 0x07, 0x03, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x03, 0x07, 0x07, 0x0f, 0x0f, 0x1f, 0x1f, 0x3f, 0x3f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x3f, 0x3f, 0x1f, 0x1f, 0x0f, 0x0f, 0x07, 0x07, 0x03, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xc0, 0xc0, 0xe0, 0xe0, 0xf0, 0xf0, 0xf8, 0xf8, 0xfc, 0xfc, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xfc, 0xfc, 0xf8, 0xf8, 0xf0, 0xf0, 0xe0, 0xe0, 0xc0, 0xc0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xc0, 0xc0, 0xe0, 0xe0, 0xf0, 0xf0, 0xf8, 0xf8, 0xfc, 0xfc, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xfc, 0xfc, 0xf8, 0xf8, 0xf0, 0xf0, 0xe0, 0xe0, 0xc0, 0xc0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x18, 0x18, 0x3c, 0x3c, 0x7e, 0x7e, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7e, 0x7e, 0x3c, 0x3c, 0x18, 0x18, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x03, 0x07, 0x07, 0x0f, 0x0f, 0x1f, 0x1f, 0x3f, 0x3f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x3f, 0x3f, 0x1f, 0x1f, 0x0f, 0x0f, 0x07, 0x07, 0x03, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x03, 0x07, 0x07, 0x0f, 0x0f, 0x1f, 0x1f, 0x3f, 0x3f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x3f, 0x3f, 0x1f, 0x1f, 0x0f, 0x0f, 0x07, 0x07, 0x03, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const uint8_t PROGMEM gameOver1[] = {
32, 32,
0x00, 0x00, 0x00, 0x00, 0xe0, 0xf0, 0xf8, 0xfc, 0xfc, 0x7e, 0x3e, 0x3f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x3f, 0x3e, 0x7e, 0xfc, 0xfc, 0xf8, 0xf0, 0xe0, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x3f, 0x7f, 0xff, 0xff, 0xfe, 0xfe, 0xfc, 0xfc, 0xfc, 0xfe, 0xef, 0xe3, 0xe3, 0xef, 0xfe, 0xfc, 0xfc, 0xfc, 0xfe, 0xfe, 0xff, 0xff, 0x7f, 0x3f, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x18, 0x1b, 0x0f, 0x1c, 0x1c, 0x39, 0x39, 0x33, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0f, 0x33, 0x39, 0x39, 0x1c, 0x1c, 0x0f, 0x1b, 0x18, 0x00, 0x00, 
0x00, 0x00, 0x18, 0xd8, 0xf0, 0x38, 0x38, 0x1c, 0x1c, 0x0e, 0x0e, 0x01, 0x07, 0x07, 0x00, 0x07, 0x07, 0x00, 0x07, 0x07, 0x01, 0x0e, 0x0e, 0x1c, 0x1c, 0x38, 0x38, 0xf0, 0xd8, 0x18, 0x00, 0x00, 

0x00, 0x00, 0x00, 0x00, 0xc0, 0xf0, 0x78, 0xfc, 0xfc, 0x7e, 0x3e, 0x3e, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x3e, 0x3e, 0x7e, 0xfc, 0xfc, 0x78, 0xf0, 0xc0, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x1f, 0x7f, 0xfe, 0xff, 0xde, 0xbe, 0x7c, 0xfc, 0xfc, 0xfe, 0xc7, 0xe3, 0xe3, 0xc7, 0xfe, 0xfc, 0xfc, 0x7c, 0xbe, 0xde, 0xff, 0xfe, 0x7f, 0x1f, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x18, 0x1b, 0x0f, 0x1c, 0x1c, 0x39, 0x39, 0x33, 0x04, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x04, 0x33, 0x39, 0x39, 0x1c, 0x1c, 0x0f, 0x1b, 0x18, 0x00, 0x00, 
0x00, 0x00, 0x18, 0xd8, 0xf0, 0x38, 0x38, 0x1c, 0x1c, 0x0e, 0x0e, 0x00, 0x07, 0x07, 0x00, 0x07, 0x07, 0x00, 0x07, 0x07, 0x00, 0x0e, 0x0e, 0x1c, 0x1c, 0x38, 0x38, 0xf0, 0xd8, 0x18, 0x00, 0x00, 

0x00, 0x00, 0x00, 0x00, 0x80, 0xe0, 0x10, 0xe8, 0x7c, 0x3c, 0x3e, 0x3e, 0x3e, 0x7f, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x3e, 0x3e, 0x3e, 0x3c, 0x7c, 0xe8, 0x10, 0xe0, 0x80, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x0f, 0x3d, 0x7e, 0xdf, 0x9e, 0x3c, 0x7c, 0xfc, 0xfc, 0xfc, 0x87, 0xc1, 0xc1, 0x87, 0xfc, 0xfc, 0xfc, 0x7c, 0x3c, 0x9e, 0xdf, 0x7e, 0x3d, 0x0f, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x10, 0x1a, 0x0f, 0x0c, 0x18, 0x18, 0x31, 0x31, 0x00, 0x7f, 0xdf, 0xff, 0xbf, 0xff, 0xff, 0xbf, 0xff, 0xdf, 0x7f, 0x00, 0x31, 0x31, 0x18, 0x18, 0x0c, 0x0f, 0x1a, 0x10, 0x00, 0x00, 
0x00, 0x00, 0x08, 0x58, 0xf0, 0x30, 0x18, 0x18, 0x0c, 0x0c, 0x06, 0x00, 0x03, 0x03, 0x00, 0x03, 0x03, 0x00, 0x03, 0x03, 0x00, 0x06, 0x0c, 0x0c, 0x18, 0x18, 0x30, 0xf0, 0x58, 0x08, 0x00, 0x00, 
};

const uint8_t PROGMEM heal1[] = {
16, 16,
0xf0, 0xf8, 0x78, 0xdc, 0xcc, 0x8e, 0x86, 0xff, 0x7f, 0x8e, 0x8e, 0xdc, 0xdc, 0x78, 0xf8, 0xb0, 
0x1f, 0x1f, 0x3c, 0x3e, 0x66, 0x67, 0xc3, 0xff, 0xff, 0xc3, 0x67, 0x66, 0x3e, 0x3c, 0x1f, 0x1a,

0xb0, 0x78, 0x68, 0x44, 0xc4, 0x82, 0x82, 0x79, 0x03, 0x86, 0x86, 0xcc, 0x4c, 0x78, 0xb8, 0x30, 
0x0a, 0x10, 0x14, 0x24, 0x22, 0x43, 0x41, 0xff, 0x01, 0x81, 0x20, 0x62, 0x14, 0x3c, 0x0f, 0x10, 

0x10, 0x20, 0x08, 0x40, 0x04, 0x80, 0x02, 0x00, 0x00, 0x02, 0x80, 0x04, 0x40, 0x08, 0x20, 0x10, 
0x00, 0x00, 0x14, 0x00, 0x22, 0x00, 0x40, 0x01, 0x01, 0x00, 0x00, 0x20, 0x00, 0x14, 0x00, 0x00, 
};

const uint8_t PROGMEM healMask[] = {
0xf0, 0xf8, 0x78, 0xdc, 0xdc, 0x8e, 0x8e, 0xff, 0xff, 0x8e, 0x8e, 0xdc, 0xdc, 0x78, 0xf8, 0xf0, 
0x1f, 0x1f, 0x3c, 0x3e, 0x66, 0x67, 0xc3, 0xff, 0xff, 0xc3, 0x67, 0x66, 0x3e, 0x3c, 0x1f, 0x1f, 
};