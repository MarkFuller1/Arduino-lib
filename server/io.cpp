#include <Arduino.h>
// #include <string>
#include "io.h"

const float IO::base = 3.3f;

IO::IO() {}

void IO::init() {
  Serial.println("Init IO");
  pinMode(pin5, OUTPUT);

  pinMode(onboardLED, OUTPUT);

  for(int i = 0 ; i < 10 ; i++){
    digitalWrite(onboardLED, HIGH);
    delay(250);
    digitalWrite(onboardLED, LOW);
    delay(250);
  }
  Serial.println("Init Done");
}

void IO::turnOnPin5() {
  digitalWrite(IO::pin5, HIGH);
}

void IO::turnOffPin5() {
  digitalWrite(IO::pin5, LOW);
}

void IO::voltageToA0(float output) {
  Serial.println("changing voltage of A0");
  int v = (int)((output * 255.0) / IO::base);
  analogWrite(IO::pinA0, v);
}