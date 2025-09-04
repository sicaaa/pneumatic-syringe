/* 
https://lastminuteengineers.com/28byj48-stepper-motor-arduino-tutorial/
ULN2003 driver board -> Arduino 

IN1 -> PIN 8 
IN2 -> PIN 9 
IN3 -> PIN 10 
IN4 -> PIN 11 
5V  -> 5V
GND -> GND

*/


//Include the Arduino Stepper Library
#include <Stepper.h>

// Define the number of steps per rotation 2048
const int stepsPerRevolution = 2048;

// Create an instance of stepper class
// Pins entered in sequence IN1-IN3-IN2-IN4 for proper step sequence
Stepper myStepper = Stepper(stepsPerRevolution, 8, 10, 9, 11);

void setup() {
}

void loop() {
  // Rotate CW at 5, 10 or 15 RPM
  myStepper.setSpeed(10);
  myStepper.step(2 * stepsPerRevolution); // 3 full turns
  delay(500);

  myStepper.setSpeed(10);
  myStepper.step(2 * -stepsPerRevolution);
  delay(500);
}
