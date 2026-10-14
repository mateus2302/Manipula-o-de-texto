//! src/led.cpp
#include "led.h"

Led::Led(uint8_t pino)
{
    _pinoLed = pino;
}

void Led::iniciar()
{
    pinMode(_pinoLed, OUTPUT);
    digitalWrite(_pinoLed, LOW);
}

void Led::ligar()
{
    _estadoLed = HIGH;
}

void Led::desligar()
{
    _estadoLed = LOW;
}

void Led::atualizar()
{
 _estadoLed = !_estadoLed;
 
}
