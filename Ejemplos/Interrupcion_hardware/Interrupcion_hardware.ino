int pin = 13;
volatile int estado = LOW;
volatile int hazPrint=0;
volatile long lasttime=millis();
long previousTime;
void setup()
{pinMode(pin, OUTPUT);  Serial.begin(9600);
attachInterrupt(0, parpadeo, CHANGE);
}
void loop()
{ digitalWrite(pin, estado);
  if(hazPrint==1)
  { Serial.println(lasttime-previousTime);
    previousTime=lasttime;
    hazPrint=0;   }
}
void parpadeo()
{ estado = !estado;
  lasttime=millis();
  hazPrint=1;}
