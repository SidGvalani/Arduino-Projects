/*
Sketch to read distance and time of an echo using HC-SR04 sensor

The HC-SR04 has 4 pins: 1 'trig', 1 'echo', 1 5V, and 1 'Gnd'. Connect 'trig' to 9 and 'echo' to 10.
The trig pin 
*/

int trig = 9;
int echo = 10;
int time;

void setup(){
Serial.begin(9600) // sets serial montitor with baud rate = 9600

}

void loop(){
pulseIn(trig, LOW); // clears trig pin
delay(100);
pulseIn(trig, HIGH); // sends a trigger
delay(100);
digitalWrite(trig, LOW);
time = pulseIn(echo, HIGH); // reads time taken for pulse emitted from sensor to an object and back
distance = 0.034 / 2 * time;

Serial.print("Distance: ");
Serial.print(distance);
Serial.println("cm");

delay(500);
  
}
