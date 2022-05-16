/*
 * this is the main/implementation file
 */

#include "Stepper_Function.h"
#include <Stepper.h>


void setup() {
  setUpClawStepper();
}

void loop() {

  operateClawStepper();
}
