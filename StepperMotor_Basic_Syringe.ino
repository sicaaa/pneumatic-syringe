// https://lastminuteengineers.com/28byj48-stepper-motor-arduino-tutorial/

//Includes the Arduino Stepper Library
#include <Stepper.h>

// Defines the number of steps per rotation 2048
const int stepsPerRevolution = 2048;

// Creates an instance of stepper class
// Pins entered in sequence IN1-IN3-IN2-IN4 for proper step sequence
Stepper myStepper = Stepper(stepsPerRevolution, 8, 10, 9, 11);

void setup() {
  // Nothing to do (Stepper Library sets pins as outputs)
}

void loop() {
  // Rotate CW at 5, 10, 15 RPM
  myStepper.setSpeed(10);
  myStepper.step(2 * stepsPerRevolution); // 3 full turns
  delay(500);

  myStepper.setSpeed(10);
  myStepper.step(2 * -stepsPerRevolution);
  delay(500);
}