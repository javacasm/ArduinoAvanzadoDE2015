void setup() {
  Serial.begin(9600);

}

void loop() {
 int valorAnalog=analogRead(A0);

 Serial.print(valorAnalog);
 Serial.print(" > ");

 float voltios=5.0*valorAnalog/1023.0;
 
 Serial.print(voltios);
 Serial.println(" v");
 delay(500);

}
