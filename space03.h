#ifndef SPACE03_H
#define SPACE03_H

#include <avr/pgmspace.h>

static const unsigned char space03[] PROGMEM = {
	// first row defines - FONTWIDTH, FONTHEIGHT, ASCII START CHAR, TOTAL CHARACTERS, FONT MAP WIDTH HIGH, FONT MAP WIDTH LOW (2,56 meaning 256)
	16,16,48,2,0,32,	
	0xC0, 0xC0, 0xF0, 0xF0, 0x3C, 0x3C, 0xFF, 0xFF, 0xFF, 0xFF, 0x3C, 0x3C, 0xF0, 0xF0, 0xC0, 0xC0,
	0xC0, 0xC0, 0xF0, 0xF0, 0x3C, 0x3C, 0xFF, 0xFF, 0xFF, 0xFF, 0x3C, 0x3C, 0xF0, 0xF0, 0xC0, 0xC0,
	0xC3, 0xC3, 0x33, 0x33, 0xCF, 0xCF, 0x33, 0x33, 0x33, 0x33, 0xCF, 0xCF, 0x33, 0x33, 0xC3, 0xC3,
	0x33, 0x33, 0xCF, 0xCF, 0x03, 0x03, 0x0F, 0x0F, 0x0F, 0x0F, 0x03, 0x03, 0xCF, 0xCF, 0x33, 0x33
};
#endif
