//Variables globales
bool isTheButtonBeignPressed = false;
int switchState=0;
int delayMillis =0;


//Variables de los pines

const int ledPin=2;
  const int buttonPin=3;
void setup() {
  //iniciando leds
  pinMode(ledPin,OUTPUT);
  //Iniciando botón
  pinMode(buttonPin,INPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:

//leer el estado del botón
switchState=digitalRead(buttonPin);
if (switchState== HIGH){
  //Revisamos si es el primer loop donde el botón está pulsado
  if (true)
  {
    isTheButtonBeignPressed = true;
    delayMillis ++;
  }
  // el botón si esta pulsado
}
else {
  isTheButtonBeignPressed = false;
  
} //llave del else
  digitalWrite(ledPin,HIGH);
  delay(1);
  digitalWrite(ledPin,LOW);
  delay(delayMillis);

  //RESET
  if (delayMillis > 15) {
   delayMillis = 0;
  }
} // vuelve al inicio del bucle (llave del loop) )
