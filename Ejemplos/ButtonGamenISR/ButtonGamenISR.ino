volatile int hazPrint=0;
volatile long startTime=millis();
volatile long endTime=millis();
void setup(){ Serial.begin(9600);
attachInterrupt(0, boton1, CHANGE);
attachInterrupt(1, boton2, CHANGE);
}
void loop()
{ if(hazPrint==1)
  { Serial.println(endTime-startTime);
    hazPrint=0;   }
}
void boton1()
{   startTime=millis();   }

void boton2()
{ endTime=millis();
  hazPrint=1;}
