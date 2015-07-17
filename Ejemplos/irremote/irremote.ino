#include <IRremote.h>

int RECV_PIN = 11;
IRrecv irrecv(RECV_PIN);
decode_results results;
void setup()
{ Serial.begin(9600);
irrecv.enableIRIn(); 
}
void loop() {
if (irrecv.decode(&results)) {
  switch(results.value)
  {
      case 0xFF30CF:
        digitalWrite(13,HIGH);
      break;
      case 0xFF10EF:
        digitalWrite(13,LOW);
        break;
      default:
        Serial.print(results.value, HEX);
        Serial.print(" ");
        Serial.println(results.value);
        break;
  }
  irrecv.resume(); // Receive the next value 
  }
}
