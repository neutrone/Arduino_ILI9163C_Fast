#ifndef __font_mario5_h__
#define __font_mario5_h__

/*
  *** Generated by rrefontgen ***
  Font:         [mario5] 48x64
  Total chars:  4 (' ' to '#')
  Total rects:  89 * 3 bytes
  Total pixels: 1004 (288 overlapping)
  Total bytes:  275 (267 rects + 8 offs)
  Bitmap size:  1536 (48x64 * 4) (+4 opt)
*/

const unsigned char fontmario5_Rects[267] PROGMEM = {
	0xad,0x4c,0x01, 0x6e,0x13,0x01, 0x2e,0x0b,0x00, 0x2f,0x4a,0x00, 0x1b,0x5a,0x09, 0xe1,0x4f,0x05, 0x94,0x1d,0x08, 0xdd,0x19,0x09, 0x40,0x09,0x04, 0x67,0x91,0x00, 0x5e,0x22,0x04, 0x9f,0x0d,0x03, 0x18,0x5c,0x04, 0x88,0x0b,0x01, 0x15,0x0e,0x05, 0x1e,0x1f,0x04, 
	0x20,0x4e,0x04, 0x46,0x09,0x01, 0x1a,0x0b,0x03, 0xca,0x0d,0x00, 0x18,0x0f,0x03, 0x01,0x0b,0x02, 0x03,0x12,0x02, 0x1c,0x21,0x02, 0x03,0x08,0x01, 0x1d,0x0c,0x01, 0x42,0x10,0x00, 0x46,0x10,0x00, 0x1e,0x18,0x01, 0x25,0x18,0x01, 0x1f,0x24,0x01, 0x47,0x0a,0x01, 
	0x57,0x1c,0x0e, 0x03,0x0c,0x00, 0x1e,0x0d,0x00, 0x09,0x0e,0x00, 0x1c,0x10,0x00, 0x03,0x11,0x00, 0x05,0x11,0x00, 0x1a,0x1b,0x00, 0x1d,0x22,0x00, 0x28,0x53,0x00, 0x50,0xcd,0x06, 0x07,0x5c,0x0b, 0x4d,0x8b,0x04, 0x57,0x94,0x02, 0xc4,0x19,0x07, 0x0e,0x9b,0x04, 
	0x0b,0x8f,0x01, 0xc5,0x93,0x01, 0x8d,0x70,0x01, 0x88,0x10,0x02, 0x12,0x0c,0x42, 0x4b,0x21,0x02, 0x0e,0xec,0x00, 0x07,0x51,0x00, 0xca,0x96,0x01, 0x4a,0x0f,0x0e, 0xc4,0x15,0x00, 0xcf,0x2a,0x00, 0x90,0x27,0x00, 0x4c,0x0b,0x00, 0x59,0x10,0x00, 0x57,0x12,0x00, 
	0x4d,0x15,0x00, 0x13,0x22,0x01, 0x46,0x12,0x02, 0x4f,0x1a,0x06, 0x89,0x5b,0x03, 0x0b,0x0c,0x00, 0x17,0x0e,0x00, 0x18,0x13,0x00, 0x13,0x1d,0x00, 0x16,0x1d,0x00, 0x06,0x1f,0x00, 0x15,0x21,0x00, 0x9a,0x56,0x00, 0xe9,0x13,0x00, 0xa8,0x16,0x00, 0xa7,0x18,0x00, 
	0x03,0x0f,0x01, 0x65,0x1c,0x00, 0x64,0x1f,0x00, 0x63,0x21,0x00, 0x62,0x22,0x00, 0x02,0x10,0x00, 0x01,0x11,0x00, 0x26,0x1b,0x00, 0x2a,0x4f,0x00, 
};

const unsigned short fontmario5_CharOffs[5] PROGMEM = {
	0x0000, 0x0004, 0x002a, 0x004d, 0x0059, 
};

RRE_Font rre_mario5 = { RRE_24B, 48,64, 0x20, 0x23, (const uint8_t*)fontmario5_Rects, (const uint16_t*)fontmario5_CharOffs };

#endif

