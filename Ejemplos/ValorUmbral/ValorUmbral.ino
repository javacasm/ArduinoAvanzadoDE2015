int pinLedRojo=6, pinLedAmarillo=4, pinLedVerde=5;
void setup() {
pinMode(pinLedRojo,OUTPUT);
pinMode(pinLedVerde,OUTPUT);
pinMode(pinLedAmarillo,OUTPUT);
Serial.begin(9600);
}
void loop() {
int valor=analogRead(A1);
int umbral=analogRead(A0);
  if ( valor <  umbral/2)
  {   // valor inferior a 300
      digitalWrite(pinLedVerde,HIGH);
      digitalWrite(pinLedRojo,LOW);
      digitalWrite(pinLedAmarillo,LOW);
      Serial.println("Valor Bajo");
  }

  if( valor>umbral)
  {   // valor superior a 600
      digitalWrite(pinLedRojo,HIGH);
      digitalWrite(pinLedVerde,LOW);
      digitalWrite(pinLedAmarillo,LOW);
      Serial.println("Valor Alto");
  }

  if( (valor>umbral/2) && (valor<umbral)        )
  {   // valor superior a 300 y menor a 600
      digitalWrite(pinLedRojo,LOW);
      digitalWrite(pinLedVerde,LOW);
      digitalWrite(pinLedAmarillo,HIGH);
      Serial.println("Valor Medio");
  }
  delay(200);
}
