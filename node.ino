#include <HCSR04.h>

UltraSonicDistanceSensor sensor(D5,D6);
int dist=0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
 delay(500);//6
 double dist = sensor.measureDistanceCm();
 Serial.print(dist);
 Serial.println(" cm"); 
}
