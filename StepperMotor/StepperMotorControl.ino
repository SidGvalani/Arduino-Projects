/*
Sketch to rotate Stepper motor in clockwise and anticlockwise directions.

Connect Stepper Motor Driver - UCN2003 - 5 V to external power supply, 'Gnd' to 'Gnd' , "IN1, IN2, IN3, IN4" to pins 8-11.

IN1-4 control the coils inside the stepper to rotate the motor.
*/

#include <Stepper.h>

int stepsPerRevolution = 2048;
Stepper myStepper(stepsPerRevolution, 8,9,10,11); // initializes object of 'Stepper' Class

void setup(){
  myStepper.setSpeed(stepsPerRevolution);
  
}

void loop(){
   myStepper.step(stepsPerRevolution); // stepper rotates in CW direction
   delay(1000);
   myStepper.step(-stepsPerRevolution); // stepper rotates in ACW direction
   delay(1000);
  
}
