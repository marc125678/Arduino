const int ledPin=2;
  const int buttonPin=3;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
  pinMode(buttonPin,INPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
int switchState=0;
switchState=digitalRead(buttonPin);
if (switchState==HIGH){
  // el botón no esta pulsado
  digitalWrite(ledPin,HIGH);
  delay(1);
  digitalWrite(ledPin,LOW);
  delay(2);

}
else {
  digitalWrite(ledPin,HIGH);
} //llave del else
} // vuelve al inicio del bucle (llave del loop) )
