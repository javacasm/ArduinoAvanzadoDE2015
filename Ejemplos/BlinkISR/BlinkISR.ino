#include <TimerOne.h>

#define LEDPIN 13
void setup() {
pinMode(LEDPIN,OUTPUT);
Timer1.initialize(100000);
Timer1.attachInterrupt(timerIsr);
}

void loop() {
  // No ponemos nada
}

void timerIsr()
{
  if(digitalRead(LEDPIN)==HIGH) // if(digitalRead(LEDPIN))
    digitalWrite(LEDPIN,LOW);
  else  
    digitalWrite(LEDPIN,HIGH);
  // digitaWrite(LEDPIN,!digitalRead(LEDPIN));
  // digitalWrite( 13, digitalRead( 13 ) ^ 1 );
}

