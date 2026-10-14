//! include/led.h

#ifndef LED_H
#define LED_H

#include <Arduino.h>

class Led

{
public:
    uint8_t _pinoLed;
    bool _estadoLed = 0;
    uint32_t _tempoAntes_ms = 0;
    uint32_t _tempoAgora_ms = 0;
    uint32_t _botaoPressionado = 0;

    Led(uint8_t _pino);

    void iniciar();
    void ligar();
    void desligar();
    void atualizar();
};

#endif