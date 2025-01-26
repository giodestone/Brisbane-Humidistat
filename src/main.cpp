#include <Arduino.h>
#include "program.h"

Program p;

void setup() 
{
  p.Setup();
}

void loop() 
{
  p.Loop();
}