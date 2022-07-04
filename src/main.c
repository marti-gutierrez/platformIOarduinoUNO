#include "header.h"
#include <avr/io.h>
#include <util/delay.h>

#define led PB5
#define portLed PORTB
#define dirLed PORTB

int main()
{
  //inicializar el stack pointer en la posición más baja de memoria
  SPL = low(RAMEND);
  SPH = high(RAMEND);
  setBit(dirLed,led);
  setBit(portLed,led);
  while(1)
  {
    setBit(portLed,led);
    _delay_ms(300);
    clearBit(portLed,led);
    _delay_ms(300);
  }
}
