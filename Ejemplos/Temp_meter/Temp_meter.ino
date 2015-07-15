#include <DHT.h>
#define DHTTYPE DHT11
int primerLed=4,ultimoLed=13;
int pinDHT=2;
int tMin=20,tMax=42;
DHT dht(pinDHT, DHTTYPE);
void setup() {
  Serial.begin(115200);
  dht.begin();
  for(int pin=primerLed;pin<=ultimoLed;pin++)  // pin=pin+1 ó pin+=1
  { pinMode(pin,OUTPUT); }
}
void loop() {
  float t = dht.readTemperature(); 
  if (isnan(t)) {
    Serial.println("Error leyendo la temperatura!");
    return;
  }
  Serial.print("Temperatura: ");
  Serial.print(t);
  Serial.print(" Temperatura(int)");
  int tInt=(int)t;
  Serial.print(tInt);
  Serial.println(" *C ");
  int ultimoLedEncendido=map(tInt,tMin,tMax,primerLed,ultimoLed);
  
  for(int pin=primerLed;pin<=ultimoLed;pin++)  // pin=pin+1 ó pin+=1
  {
    if(pin<=ultimoLedEncendido)
    { digitalWrite(pin,HIGH); }
    else
    { digitalWrite(pin,LOW);}
  }
  
  delay(500);
}
