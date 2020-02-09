#include <HCSR04.h>

UltraSonicDistanceSensor sensor(D5,D6);//Transmit and Recieve:
int dist=0;
void setup() {
  //Initialise:
Serial.begin(9600);
}
void loop() 
{
 delay(500);
 double dist = sensor.measureDistanceCm();//To measure the distance im cm:
 Serial.print(dist);
 Serial.println(" cm"); 
}

