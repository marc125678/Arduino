                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   //Variables globales
bool isTheButtonBeignPressed = false;
int switchState=0;
int intensity =0;


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
//leer el estado del botón
switchState=digitalRead(buttonPin);
if (switchState== HIGH){
  //Revisamos si es el primer loop donde el botón está pulsado
  if (isTheButtonBeignPressed == false)
  {
    isTheButtonBeignPressed = true;
    intensity = intensity + 16;
    //RESET
    if (intensity > 255) {
    intensity = 0;
    }
  }
  // el botón si esta pulsado
}
else {
  isTheButtonBeignPressed = false;
  } //llave del else
analogWrite(ledPin,intensity);
} // vuelve al inicio del bucle (llave del loop) )
