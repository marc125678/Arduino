const int sensorPin = A0;

const float baselineTemp = 23.0;

void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600); //abre un puerto en serie 
    for(int pinNumber = 2; pinNumber<5; pinNumber++) {
    pinMode(pinNumber, OUTPUT);
    digitalWrite(pinNumber, LOW);
    }
}

void loop() {
  // put your main code here, to run repeatedly:
int sensorVal = analogRead(sensorPin);
Serial.print(sensorPin);
Serial.print(sensorVal);
//convierte la lectura del ADC a voltaje
float voltage = (sensorVal/1024.0) * 5.0;
Serial.print(", Volts: ");
Serial.print(voltage);
Serial.print(", degrees C: ");
//convierte el voltaje a temperatura em grados
float temperature = (voltage - .5) * 100;
Serial.print(temperature);
if(temperature < baselineTemp) {
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
}else if(temperature >= baselineTemp+2 && temperature < baselineTemp+4){
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
}else if(temperature >= baselineTemp+4 && temperature < baselineTemp+5){
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
}else if(temperature >= baselineTemp+5) {
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
}
delay(100);
}
