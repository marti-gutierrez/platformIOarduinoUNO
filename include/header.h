#include <avr/sfr_defs.h>

#define setBit(sfr,bit) (_SFR_BYTE(sfr) |= _BV(bit))
#define clearBit(sfr,bit) (_SFR_BYTE(sfr) &= ~_BV(bit))
