int pinLedRojo=6, pinLedVerde=5;

void setup() {
pinMode(pinLedRojo,OUTPUT);
pinMode(pinLedVerde,OUTPUT);
Serial.begin(9600);
}

void loop() {
int valor=analogRead(A0);
  if ( valor < 500 )
  {
      // valor inferior a 500
      digitalWrite(pinLedVerde,HIGH);
      digitalWrite(pinLedRojo,LOW);
      Serial.println("Valor Bajo");
  }
  else
  {
      // valor superior a 500
      digitalWrite(pintLedRojo,HIGH);
      digitalWrite(pinLedVerde,LOW);
      Serial.println("Valor Alto");
  }
  delay(200);
}
