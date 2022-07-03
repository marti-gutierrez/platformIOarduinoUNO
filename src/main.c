#define F_CPU 16000000UL

#include "header.h"
#include <avr/io.h>
#include <util/delay.h>

int main()
{
  setBit(DDRB,PB5);
  setBit(PORTB,PB5);
  while(1)
  {
    setBit(PORTB,PB5);
    _delay_ms(1000);
    clearBit(PORTB,PB5);
    _delay_ms(1000);
  }
}
