/*
This sketch sweeps a Servo motor.

Connect 5V to 5V and 'Gnd' to 'Gnd' from Servo to Arduino Uno R3.

Connect Servo's I/O pin to pin 9 of Uno.
*/
int servoPin = 9;
Servo myServo(servoPin);

void setup(){
    myServo.attach(servoPin);
    myServo.write(0); // set pos of servo to 0 degrees
}

void loop(){
    for(int i = 0; i <= 180; i++){
      myServo.write(i); // updates pos of servo from 0 to 180 degrees
      delay(10);
    }
    for(int i = 180; i >= 0; i--){
      myServo.write(i); // updates pos of servo from 180 to 0 degrees
      delay(10);
    }
}
