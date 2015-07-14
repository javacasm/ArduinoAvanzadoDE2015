
int pinPulsador=3,pinRojo=9,pinVerde=8;
void setup() {
 pinMode(pinPulsador,INPUT);
 pinMode(pinRojo,OUTPUT);
 pinMode(pinVerde,OUTPUT);
 Serial.begin(9600);
}

long ultimoTiempo=millis();

void loop() {
  int valorPulsador=digitalRead(pinPulsador);
  long nuevoTiempo=millis();
  if(    ( valorPulsador == HIGH)  ||  ((nuevoTiempo-ultimoTiempo)>4000 ) )
  {
     Serial.print(nuevoTiempo-ultimoTiempo);
     Serial.println(" ms");
     ultimoTiempo=nuevoTiempo;
     digitalWrite(pinRojo,HIGH);
     digitalWrite(pinVerde,LOW);
     delay(50);
  }
  else
  {
     digitalWrite(pinRojo,LOW);
     digitalWrite(pinVerde,HIGH);
  }
}
