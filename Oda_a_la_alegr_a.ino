/****** Buzzer ***** //
 * Escrito: AMS
 * 
 */

int Informacion_Serial;
int Nota=11;                  // Puerto de salida

void setup() {
  pinMode(Nota, OUTPUT);     // Configuración del puerto
  Serial.begin(9600);
  Serial.println("Oda a la alegría");
}                                     // 

void loop() {
    
    if(Serial.available()>0) {
      Informacion_Serial=Serial.read();

      switch(Informacion_Serial) {

//////// 1
        case '1':
          Serial.println("Oda a la alegría"); 
          analogWrite(Nota, 90);     // Mi     
            delay(200);
          analogWrite(Nota, 0);     
            delay(100);
            
          analogWrite(Nota, 90);     // Mi
            delay(200);
          analogWrite(Nota, 0);     
            delay(100);
            
          analogWrite(Nota, 130);     // Fa
            delay(200);        
          analogWrite(Nota, 0);     
            delay(100);
            
          analogWrite(Nota, 170);     // Sol
            delay(200);   
          analogWrite(Nota, 0);     
            delay(100);
                      
          analogWrite(Nota, 170);     // Sol
            delay(200);  
          analogWrite(Nota, 0);       
            delay(100);
                        
          analogWrite(Nota, 130);     // Fa
            delay(200); 
          analogWrite(Nota, 0);     
            delay(100);
            
          analogWrite(Nota, 90);       // Mi  
            delay(200);  
          analogWrite(Nota, 0);     
            delay(100);
            
          analogWrite(Nota, 50);       // Re  
            delay(200);
          analogWrite(Nota, 0);     
            delay(100);
            
          analogWrite(Nota, 10);       // Do
            delay(200);        
          analogWrite(Nota, 0);     
            delay(100);
            
          analogWrite(Nota, 10);       // Do   
            delay(200);
          analogWrite(Nota, 0);     
            delay(100);
            
          analogWrite(Nota, 50);       // Re
            delay(200);
          analogWrite(Nota, 0);     
            delay(100);
            
          analogWrite(Nota, 90);       // Mi
            delay(200);
          analogWrite(Nota, 0);     
            delay(100);
            
          analogWrite(Nota, 90);       // Mi
            delay(400); 
          analogWrite(Nota, 0);     
            delay(100);
            
          analogWrite(Nota, 50);       // Re
            delay(400);
          analogWrite(Nota, 0);     
            delay(100);

////////// 2

          analogWrite(Nota, 90);     // Mi     
            delay(200);
          analogWrite(Nota, 0);     
            delay(100);
            
          analogWrite(Nota, 90);     // Mi
            delay(200);
          analogWrite(Nota, 0);     
            delay(100);
            
          analogWrite(Nota, 130);     // Fa
            delay(200);        
          analogWrite(Nota, 0);     
            delay(100);
            
          analogWrite(Nota, 170);     // Sol
            delay(200);   
          analogWrite(Nota, 0);     
            delay(100);
                      
          analogWrite(Nota, 170);     // Sol
            delay(200);  
          analogWrite(Nota, 0);       
            delay(100);
                        
          analogWrite(Nota, 130);     // Fa
            delay(200); 
          analogWrite(Nota, 0);     
            delay(100);
            
          analogWrite(Nota, 90);       // Mi  
            delay(200);  
          analogWrite(Nota, 0);     
            delay(100);
            
          analogWrite(Nota, 50);       // Re  
            delay(200);
          analogWrite(Nota, 0);     
            delay(100);
            
          analogWrite(Nota, 10);       // Do
            delay(200);        
          analogWrite(Nota, 0);     
            delay(100);
            
          analogWrite(Nota, 10);       // Do   
            delay(200);
          analogWrite(Nota, 0);     
            delay(100);
            
          analogWrite(Nota, 50);       // Re
            delay(200);
          analogWrite(Nota, 0);     
            delay(100);
            
          analogWrite(Nota, 90);       // Mi
            delay(200);
          analogWrite(Nota, 0);     
            delay(100);
            
          analogWrite(Nota, 50);       // Re
            delay(400); 
          analogWrite(Nota, 0);     
            delay(100);
            
          analogWrite(Nota, 10);       // Do
            delay(400);
          analogWrite(Nota, 0);     
            delay(100);

///////// 3

          analogWrite(Nota, 50);       // Re
            delay(400); 
          analogWrite(Nota, 0);     
            delay(100);
            
          analogWrite(Nota, 90);       // Mi  
            delay(200);  
          analogWrite(Nota, 0);     
            delay(100);
            
          analogWrite(Nota, 10);       // Do  
            delay(200);
          analogWrite(Nota, 0);     
            delay(100);  

          analogWrite(Nota, 50);       // Re
            delay(400); 
          analogWrite(Nota, 0);     
            delay(100);
            
          analogWrite(Nota, 90);       // Mi  
            delay(200);  
          //analogWrite(Nota, 0);     
            delay(100);

          analogWrite(Nota, 130);     // Fa
            delay(200);        
          analogWrite(Nota, 0);     
            delay(100);

          analogWrite(Nota, 90);       // Mi  
            delay(200);  
          analogWrite(Nota, 0);     
            delay(100);

          analogWrite(Nota, 10);       // Do
            delay(200);        
          analogWrite(Nota, 0);     
            delay(100);

          analogWrite(Nota, 50);       // Re
            delay(400); 
          analogWrite(Nota, 0);     
            delay(100);
            
          analogWrite(Nota, 90);       // Mi  
            delay(200);  
          //analogWrite(Nota, 0);     
            delay(100);

          analogWrite(Nota, 130);     // Fa
            delay(200);        
          analogWrite(Nota, 0);     
            delay(100);

          analogWrite(Nota, 90);       // Mi  
            delay(200);  
          analogWrite(Nota, 0);     
            delay(100);

          analogWrite(Nota, 50);       // Re
            delay(200);        
          analogWrite(Nota, 0);     
            delay(100);

         analogWrite(Nota, 10);       // Do
            delay(200);        
          analogWrite(Nota, 0);     
            delay(100);

          analogWrite(Nota, 50);       // Re
            delay(400); 
          analogWrite(Nota, 0);     
            delay(100);

          analogWrite(Nota, 10);       // Do
            delay(200);        
          analogWrite(Nota, 0);     
            delay(100);

///////// 4

          analogWrite(Nota, 90);     // Mi     
            delay(200);
          analogWrite(Nota, 0);     
            delay(100);
            
          analogWrite(Nota, 90);     // Mi
            delay(200);
          analogWrite(Nota, 0);     
            delay(100);
            
          analogWrite(Nota, 130);     // Fa
            delay(200);        
          analogWrite(Nota, 0);     
            delay(100);
            
          analogWrite(Nota, 170);     // Sol
            delay(200);   
          analogWrite(Nota, 0);     
            delay(100);
                      
          analogWrite(Nota, 170);     // Sol
            delay(200);  
          analogWrite(Nota, 0);       
            delay(100);
                        
          analogWrite(Nota, 130);     // Fa
            delay(200); 
          analogWrite(Nota, 0);     
            delay(100);
            
          analogWrite(Nota, 90);       // Mi  
            delay(200);  
          analogWrite(Nota, 0);     
            delay(100);
            
          analogWrite(Nota, 50);       // Re  
            delay(200);
          analogWrite(Nota, 0);     
            delay(100);
            
          analogWrite(Nota, 10);       // Do
            delay(200);        
          analogWrite(Nota, 0);     
            delay(100);
            
          analogWrite(Nota, 10);       // Do   
            delay(200);
          analogWrite(Nota, 0);     
            delay(100);
            
          analogWrite(Nota, 50);       // Re
            delay(200);
          analogWrite(Nota, 0);     
            delay(100);
            
          analogWrite(Nota, 90);       // Mi
            delay(200);
          analogWrite(Nota, 0);     
            delay(100);
            
          analogWrite(Nota, 50);       // Re
            delay(400);
          analogWrite(Nota, 0);     
            delay(100);

          analogWrite(Nota, 10);       // Do   
            delay(200);
          analogWrite(Nota, 0);     
            delay(100);

          analogWrite(Nota, 10);       // Do   
            delay(400);
          analogWrite(Nota, 0);     
            delay(100);
                                                                       
          break; 
    
        }
    }
} 

 
