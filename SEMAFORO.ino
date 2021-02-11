
//estado del botón
int switchState = 0;

void setup() {
  //Iniciando leds
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  //Iniciando botón
  pinMode(2,INPUT);
}


void loop() {
  //leer el estado del botón
  switchState = digitalRead(2);
  //Condición de activación
  if ( switchState == LOW) {
     // El botón no està pulsado
     digitalWrite(3,HIGH); // led rojo
     digitalWrite(4,LOW); // led azul
     digitalWrite(5,LOW); // led azul
     }
     else
     {
      //pulsamos el botón
      digitalWrite(3,LOW); // led rojo
      digitalWrite(4,LOW); // led azul
      digitalWrite(5,HIGH); // led azul
      // esperar
      delay(1000);
      //permutar los LEDS
      digitalWrite(4,HIGH); // led azul
      digitalWrite(5,LOW); // led azul
      delay(1000);
      
     }
  
  

}
