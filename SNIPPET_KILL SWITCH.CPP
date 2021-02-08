//colocar en la sección de variables globales
int switchState = 0;
bool isTheButtonBeingPressed = false;
bool play = false;
// recordar que el pin del botón puede cambiar
const int buttonPin=4;


// colocar dentro del setup
pinMode(buttonPin, INPUT);


// colocar dentro del loop
checkButton();
if (play) {
  //Colocar aquí el códgio a ejecutar
}


// función independiente checkButton
void checkButton(){
  switchState = digitalRead(buttonPin);
  if(switchState == HIGH){
    if(isTheButtonBeingPressed == false){
      play = !play;
      isTheButtonBeingPressed = true;
    }
  }
  else{
    isTheButtonBeingPressed = false;
  }
}
