int sensorValue;
int sensorLow = 1023;
int sensorHigh= 0;
const int ledPin = 13;
void setup() {
pinMode(ledpin, OUTPUT);
digitalWrite(ledPin, HIGH);

while (millis() < 5000) {
sensorValue = analogRead(AO);
if (sensorValue >sensorHigh){
  sensorHigh = sensorValue;
}
if (sensorValue < sensorLow){
  sensorLow = sensorValue;
}
digitalWrite(ledpin, LOW);
}

void loop() {
 checkButton();
 if (play) {
  sound();
  }

void checkButton(){
switchState = digitalRead(buttonPin);
if (switchState == HIGH){
if(isTheButtonBeignPressed == false){
play = !play;
isTheButtonBeignPressed = true;
}
  }
  else{
   isTheButtonBeignPressed = false;
}
void sound() {
sensorValue = analogRead(AO)
int pitch =
map(sensorValue, sensorLow, sensorHigh, 50, 4000);
tone(8,pitch,20);
delay(10);
}
}
  

}
