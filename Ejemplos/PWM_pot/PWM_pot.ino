int pinLed=6;
void setup() {
  Serial.begin(9600);
  }

void loop() {
  int valorPot=analogRead(A0);
  int valorLed=map(valorPot,0,1023,0,255);
  analogWrite(pinLed,valorLed);

  Serial.print(valorPot);
  Serial.print(" > ");
  Serial.println(valorLed);
  delay(100);
}
