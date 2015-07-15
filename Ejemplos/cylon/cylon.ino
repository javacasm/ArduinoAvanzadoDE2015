unsigned char upDown=1; // start off going UP
unsigned char cylon=0; // determines which LED is on 0 to 4
void setup() { // initialize the digital pins as outputs.
DDRB = B00011111; // sets Arduino port B pins 0 to 4 as outputs pinMode
}
void loop() {
if(upDown==1){
  cylon++;  
  if(cylon>=4) 
    upDown=0; // Reached max LED, next time we need to go down
}
else {
  cylon--;
  if(cylon==0) upDown=1;
 // Reached min LED, next time we need to go up
 }
PORTB = 1 << cylon;
delay(150);
}
