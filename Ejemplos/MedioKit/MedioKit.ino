#define primerLed 4
#define ultimoLed 13

void setup() {
  for(int pin=primerLed;pin<=ultimoLed;pin++)  // pin=pin+1 ó pin+=1
  { pinMode(pin,OUTPUT); }
}

int contador=primerLed;

void loop() {
  digitalWrite(contador,HIGH);
  delay(50);
  digitalWrite(contador,LOW);

  if(contador>=ultimoLed)
  {  contador=primerLed; }
  else
  {  contador=contador+1;  }
}
