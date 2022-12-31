#include <Stepper.h>

const int stepsPerRevolution = 2048;

Stepper myStepper(stepsPerRevolution, 8, 10, 9, 11);

void setup() {
  myStepper.setSpeed(15);

  Serial.begin(9600);
}
  // Serial.println("clockwise");

  // myStepper.step(stepsPerRevolution);
  // delay(500);

  // Serial.println("counter");
  // myStepper.step(-stepsPerRevolution);
  // delay(500);

void loop(){
  long milli = millis();

  long seconds = milli / 1000;
  long minutes = seconds / 60;
  long hours = minutes / 60;

  // Serial.println("-----------");
  // Serial.print("hours:");
  // Serial.println(hours);
  // Serial.print("mins:");
  // Serial.println(minutes);
  // Serial.print("seconds:");
  // Serial.println(seconds);
  // Serial.print("millis:");
  // Serial.println(milli);

  myStepper.step(stepsPerRevolution);
  Serial.println("stepped");
}
