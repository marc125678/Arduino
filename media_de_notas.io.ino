/*
 * Marc Navarro
 * fecha 8 de marzo
media de notas .ino
 * 
*/ 


int notas[] = {2,7,9,,3};
int numeroNotas =5;
void setup() {
  int notaMinima = 10;
  int SumaNotas=0;
  for (int i=0; i < numeroNotas; i++){
   SumaNotas= SumaNotas+ notas[i];
   if ( notas[i] < notaMinima){
    notaMinima= notas[i];

   }
  }
   float notaMedia = SumaNotas/numeroNotas;
   Serial.begin(9600);
    Serial.print("Nota Media: ");
    Serial.println(notaMedia);
    Serial.print (" Nota minima:");
    Serial.println(notaMinima);

   Serial.println("Calculo de si toca hacer el examen con el operador Y");
   if (notaMedia >=5 && notaMinima >3) {
    Serial.println("No toca hacer el examen de acesso");
   }
   else {
   Serial.println("Toca hacer el examen de acceso");
   }
   
   }



void loop() {
  // put your main code here, to run repeatedly:

}
