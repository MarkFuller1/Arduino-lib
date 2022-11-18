#pragma once
#include <Arduino.h>

class IO {
public:
  const static int pin5 = 5;
  const static int pinA0 = A0;
  const static int onboardLED = LED_BUILTIN;
  const static float base;

  IO();

  void init();

  void turnOnPin5();

  void turnOffPin5();

  void voltageToA0(float output);
};