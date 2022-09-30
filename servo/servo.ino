#include <Stepper.h>

const int stepsPerRevolution = 1500;

Stepper myStepper(stepsPerRevolution, 8, 10, 9, 11);

void setup() {
  myStepper.setSpeed(20);

  Serial.begin(9600);
}

void loop(){
  Serial.println("clockwise");

  myStepper.step(stepsPerRevolution);
  delay(500);

  Serial.println("counter");
  myStepper.step(-stepsPerRevolution);
  delay(500);
}