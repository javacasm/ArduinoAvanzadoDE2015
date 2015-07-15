void setup() {
  
  DDRB=B00111111; // 63
  DDRD=B11110000;
}

void loop() {
  // put your main code here, to run repeatedly:
  PORTB=B00101010;
  PORTD=B10100000;
  delay(500);
  PORTB=B00010101;
  PORTD=B01010000;
  delay(500);
}
