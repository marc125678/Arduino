bool esIgualA (obj cosa1aComparar, obj cosa2aComparar) {
 //magia
 }
if ((variableTal > 200) && !deberiaComerPatatas) {
 //cosa
  }
  if (sensorValue > 514 && sensorValue < 600) {
   digitalWrite(pinLed, HIGH);
  }
  if (sensorX < 100 || sensorX > 923) {
   digitalWrite(pinLed, HIGH);
  }
  if (!(sensorX >= 100 && sensorX <= 923)) {
   digitalWrite(pinLed, HIGH);
  }
  if (sensorValue > 504) {
   if (sensorValue <516){
       tone(speakerPin,tone,duration);
    }
  }
  if (sensorValue > 504) {
   if (sensorValue <516){
       tone(speakerPin,tone,duration);
    }
    else{
       digitalWrite(pin, HIGH);
    }
  }
  void checkButton() {
  // leemos el botón y lo guardamos en switchtate
  switchState = digitalRead(switchPin);
  Serial.println(switchState);
  if (switchState == HIGH) {
    if (isTheButtonBeingPressed == false) {
      shouldLightPins = !shouldLightPins;
      isTheButtonBeingPressed = true;
    }
  }
  else {
    isTheButtonBeingPressed = false;
  }
}
void checkButton() {
  // leemos el botón y lo guardamos en switchtate
  switchState = digitalRead(switchPin);
  Serial.println(switchState);
  if (switchState == HIGH && !isTheButtonBeingPressed) {
      shouldLightPins = !shouldLightPins;
      isTheButtonBeingPressed = true;
  }
  else {
    isTheButtonBeingPressed = false;
  }
}
void loop() {
  //lo leo todo del tiron
  ejeX = analogRead(pinEjeX);
  ejeY = analogRead(pinEjeY);
  estadoBoton = digitalRead(pinBoton);
  //reviso el botón primero
  if (estadoBoton == LOW){
    digitalWrite(pinLedBoton, HIGH);
  }
  else{
    digitalWrite(pinLedBoton, LOW);
  }
  //reviso el eje X
  if (ejeX >= 923 || ejeX <= 100){
    digitalWrite(pinLedEjeX, HIGH);
  }
  else{
    digitalWrite(pinLedEjeX, LOW);
  }
  //reviso el eje Y
  if (ejeY >= 923 || ejeY <= 100){
    digitalWrite(pinLedEjeY, HIGH);
  }
  else{
    digitalWrite(pinLedEjeY, LOW);
  }
}
void loop() {
  //lo leo todo del tiron
  ejeX = analogRead(pinEjeX);
  ejeY = analogRead(pinEjeY);
  estadoBoton = digitalRead(pinBoton);
  //reviso el botón primero
  if (estadoBoton != HIGH){
    digitalWrite(pinLedBoton, HIGH);
  }
  else{
    digitalWrite(pinLedBoton, LOW);
  }
  //reviso el eje X
  if (!(ejeX < 923 && ejeX > 100)){
    digitalWrite(pinLedEjeX, HIGH);
  }
  else{
    digitalWrite(pinLedEjeX, LOW);
  }
  //reviso el eje Y
  if (!(ejeY < 923 && ejeY > 100)){
    digitalWrite(pinLedEjeY, HIGH);
  }
  else{
    digitalWrite(pinLedEjeY, LOW);
  }
}
