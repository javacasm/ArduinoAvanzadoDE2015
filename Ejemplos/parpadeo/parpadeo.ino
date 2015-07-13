int pinLed=13;
int pausa=50;
void setup() {   // Configuracion

pinMode(pinLed,OUTPUT); // Activamos como salida

}

void loop()  { // Bucle
  
digitalWrite(pinLed,HIGH);   // Encendemos
delay(pausa);  // esperamos encendido
digitalWrite(pinLed,LOW);
delay(pausa);  // esperamos apagado
}
