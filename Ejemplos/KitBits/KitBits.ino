#define PAUSA 100

void setup() {  DDRB=B00111111; // 63
 DDRD=B11110000;
 }
void loop() {
  
  /*PORTB=B00000010; x2
  delay(100);
  PORTB=PORTB*2;
  //PORTB=B00000100; x2 
  delay(100); 
  PORTB=B00001000; x2
  ....
  */
  PORTB=0;
  PORTD=B00010000;
  for(int i=1;i<4;i++)
  {
    delay(PAUSA);
    PORTD=PORTD<<1;
  }
  delay(PAUSA);
  PORTD=0;
  PORTB=B00000001;
  for(int i=1;i<6;i++)
  { delay(PAUSA); 
    PORTB=PORTB<<1; // PORT*=2;
  }

  
  for(int i=1;i<6;i++)
  { PORTB=PORTB>>1;
    delay(PAUSA);}
  PORTB=0;
  for(int i=1;i<4;i++)
  {
    delay(PAUSA);
    PORTD=PORTD>>1;
  }
  delay(PAUSA);
  PORTD=0;
}
