#include <CapacitiveSensor.h>
CapacitiveSensor capSensor = CapacitiveSensor(4,2);
int threshold = 1000;
const int ledpin = 12;

void setup () {
Serial.begin(9600);
pinMode(ledpin, OUTPUT);
}

void loop(){
long sensorValue = capSensor.capacitiveSensor(30);
Serial.println(sensorValue);
if(sensorValue > threshold) {
digitalWrite (ledpin, HIGH);
}
else {
digitalWrite(ledpin, LOW);
}
delay(10);



}
