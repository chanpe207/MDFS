/* 
 *  This is the C++ (or .cpp) file
 *  There can be many of these file tabs implemented into the main code
 *  Libraries used here must be defined in the header (h.) file
 *  Each process (void ***()) must be declared in the header file
 */

#include "Stepper_Function.h" //includes the definitions of the header file (.h)
#include <Stepper.h>
#include <Arduino.h>
//NOTE: quotations ("") are used to look in the local files being used in this code, arrows (<>) look in the global libraries e.g. <Arduino.h>

// all the setup preferences of the stepper motor must be done here, even the pin assignments
  const int stepsPerRevolution = 2048;
  int IN1 = 2;
  int IN2 = 4;
  int IN3 = 7;
  int IN4 = 8;
  Stepper clawStepper(stepsPerRevolution, IN1, IN3, IN2, IN4); //sets up number of steps per rev and pins of IN 1-4

void setUpClawStepper() {
  Serial.begin(9600);
  clawStepper.setSpeed(15); //RPM
}

void testClawStepper() {
  clawStepper.step(2048);
  clawStepper.step(-2048);
  Serial.println("check");
}

void operateClawStepper() {
  //clawStepper.setSpeed(20);
  clawStepper.step(0);
  clawStepper.step(-2000);
  clawStepper.step(2000);
}
