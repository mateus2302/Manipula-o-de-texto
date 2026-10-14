#include <Arduino.h>
#include <Botao.h>
#include "led.h"

Led ledVermelho1 = 4;
Led ledVermelho2 = 5;
Led ledVermelho3 = 16;
Led ledVermelho4 = 18;

Botao btn(12);

void setup()
{
  Serial.begin(115200);
  btn.iniciar();
}

void loop()
{
}