#define primerLed 4
#define ultimoLed 13

void setup() {
  for(int pin=primerLed;pin<=ultimoLed;pin++)  // pin=pin+1 ó pin+=1
  { pinMode(pin,OUTPUT); }
}

void loop() {
  for(int pin=primerLed;pin<=ultimoLed;pin++)  // pin=pin+1 ó pin+=1
  {
    digitalWrite(pin,HIGH);
    delay(50);
    digitalWrite(pin,LOW);
  }

  for(int pin=ultimoLed;pin>=primerLed;pin--)  // pin=pin-1 ó pin-=1
  {
    digitalWrite(pin,HIGH);
    delay(50);
    digitalWrite(pin,LOW);
  }
}
