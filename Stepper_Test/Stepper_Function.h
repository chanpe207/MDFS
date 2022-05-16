/*
 * This is the header file (.h)
 * There is only one of these needed to implement the individual .cpp files into the main code, but more can be added if wanted for organisation
 * all the libraries and processes used must be define here
 */

#ifndef STEPPER_FUNCTION_H        //if Stepper_Test.h isn't defined already...
#define STEPPER_FUNCTION_H        //define it as...
  #include <Arduino.h>            //including the arduino library
  #include <Stepper.h> //including stepper library
  void setUpClawStepper();        //including the process(es) being called in the implementation file (.cpp)
  void testClawStepper();
  void operateClawStepper();
                                  //etc. add more if needed
#endif                            //end of definition
