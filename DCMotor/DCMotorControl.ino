/*
  Simple Sketch to turn ON/OFF DC Motor
  
  Connect Motor Driver to pin 8 on Arduino Uno R3
*/
int motorPin = 8;
void setup(){
  pinMode(motorPin,OUTPUT);
}

void loop(){
  // set motor pin to HIGH and LOW for 4 seconds each.
  digitalWrite(motorPin, HIGH);
  delay(4000);  
  digitalWrite(motorPin, LOW);
  delay(4000);
  
}
