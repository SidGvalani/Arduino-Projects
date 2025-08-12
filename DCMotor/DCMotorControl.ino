/*
  Simple Sketch to turn ON/OFF DC Motor
  
  Connect Motor Driver - L293D - to DC Motor with '+' of DC motor to 'Out1' of driver and '-' of Motor to 'Out2' of Driver
  Enable L293D by connecting Enable Pin to PWM enabled pins on Arduino Uno(3,5,6,9,10,11) to control speed of motor.
  Connect 'IN1' and 'IN2' pins to any pins on Uno to control direction and state of motor.
*/
int motorDir1 = 8;
int motorDir2 = 4;
int motorSpeed = 9;
void setup(){
  pinMode(motorDir1,OUTPUT);
  pinMode(motorDir2,OUTPUT);
  pinMode(motorSpeed,OUTPUT);
}

void loop(){
  // set motor pin to HIGH and LOW for 4 seconds each.
   digitalWrite(motorDir1,HIGH);
   digitalWrite(motorDir2,LOW);
   for(int i = 0; i < 255 ; i++){
    analogWrite(motorSpeed,i);
    delay(100) // Increases speed from LOW to HIGH in 2.56 seconds
   }
   delay(3000) // runs at full speed for 3s
   digitalWrite(motorDir1,LOW);
   digitalWrite(motorDir2,HIGH);  // reverses direction of motor
   for(int i = 0; i < 255 ; i++){
    analogWrite(motorSpeed,i);
  }
     delay(3000) // runs at full speed for 3s
}
