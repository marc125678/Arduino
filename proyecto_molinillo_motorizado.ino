
const int motorPin= 6;
int potenciometerValue=0;
int motorValue=0;
void setup() {
 pinMode(motorPin, OUTPUT);
} 
void loop() {
potenciometerValue= analogRead(A0);
motorValue = potenciometerValue /4;
analogWrite(motorPin, motorValue);
 
}
