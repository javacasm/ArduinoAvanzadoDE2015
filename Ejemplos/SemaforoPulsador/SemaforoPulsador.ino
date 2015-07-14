
int pinPulsador=3,pinRojo=9,pinVerde=8;
void setup() {
 pinMode(pinPulsador,INPUT);
 pinMode(pinRojo,OUTPUT);
 pinMode(pinVerde,OUTPUT);
}

void loop() {
  int valorPulsador=digitalRead(pinPulsador);
  if( valorPulsador == HIGH)
  {
     digitalWrite(pinRojo,HIGH);
     digitalWrite(pinVerde,LOW);
     delay(500);
  }
  else
  {
     digitalWrite(pinRojo,LOW);
     digitalWrite(pinVerde,HIGH);
  }
}
