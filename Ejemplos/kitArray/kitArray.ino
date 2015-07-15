

// leds[0],leds[9]  leds[99] 

/* int leds2[10]; 
leds2[0]=4;
leds2[1]=5;
....
leds2[9]=13;
*/ 
int leds[]={4,5,6,7,8,9,10,11,12,13};
void setup() {
   Serial.begin(9600);
   for(int i=0;i<sizeof(leds)/sizeof(int);i++)  // pin=pin+1 ó pin+=1
    { // Serial.print(i);   Serial.print(",");   Serial.println(leds[i]);
      pinMode(leds[i],OUTPUT); 
      }
}

void loop() {
  for(int i=0;i<sizeof(leds)/sizeof(int);i++)  // pin=pin+1 ó pin+=1
  { digitalWrite(leds[i],HIGH);    delay(50);   digitalWrite(leds[i],LOW);
   }

  for(int i=sizeof(leds)/sizeof(int)-1;i>=0;i--)  // pin=pin-1 ó pin-=1
  { digitalWrite(leds[i],HIGH);    delay(50);   digitalWrite(leds[i] ,LOW);
  }
}
