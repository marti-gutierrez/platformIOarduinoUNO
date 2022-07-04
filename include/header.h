#include <avr/sfr_defs.h>

//frecuencia de cristal de cuarzo del Arduino UNO
#define F_CPU 16000000UL
//macros para poner en uno o cero el bit de un determinado registro
#define setBit(sfr,bit) (_SFR_BYTE(sfr) |= _BV(bit))
#define clearBit(sfr,bit) (_SFR_BYTE(sfr) &= ~_BV(bit))
//Obtener los bytes high y low y una palabra (2 bytes = 16bits)
#define high(x) ((x) >> 8)
#define low(x) ((x) & 0x00FF)
