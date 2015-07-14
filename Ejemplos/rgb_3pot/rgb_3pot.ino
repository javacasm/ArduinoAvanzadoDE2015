int pinRed=11,pinBlue=10,pinGreen=9;
int pinARed=A0,pinABlue=A1,pinAGreen=A2;
void setup() {
  Serial.begin(9600);
  }

void loop() {
  int potR=analogRead(pinARed);
  int potG=analogRead(pinAGreen);
  int potB=analogRead(pinABlue);
  int valorRed=map(potR,0,1023,0,255);
  int valorGreen=map(potG,0,1023,0,255);
  int valorBlue=map(potB,0,1023,0,255);
  analogWrite(pinRed,valorRed);
  analogWrite(pinGreen,valorGreen);
  analogWrite(pinBlue,valorBlue);

  Serial.print(valorRed);
  Serial.print(",");
  Serial.print(valorGreen);
  Serial.print(",");
  Serial.println(valorBlue);
  delay(100);
}
