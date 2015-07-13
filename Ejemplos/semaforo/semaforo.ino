int pinV=13;
int pinA=12;
int pinR=11;
int pausa=500;
void setup() {   // Configuracion

pinMode(pinV,OUTPUT); 
pinMode(pinA,OUTPUT); 
pinMode(pinR,OUTPUT); 

}


void parpadeo(int ledParpadeo,int nParpadeo,int pausaParpadeo)
{
  for(int i=0;i<nParpadeo;i=i+1)   // for(inicializacion;comprobacion;incremento)
  {
    digitalWrite(ledParpadeo,HIGH);
    delay(pausaParpadeo);
    digitalWrite(ledParpadeo,LOW);
    delay(pausaParpadeo);
  }
}

void loop()  { // Bucle

int valor=analogRead(A0);  // Leemos el potenciometro
pausa=valor;               // pausa tendrá el valor del pot (entre 0 y 1023)

digitalWrite(pinV,HIGH);   // Encendemos
delay(pausa);  // esperamos encendido
digitalWrite(pinV,LOW);
parpadeo(pinV,12,20);  // Parpadeo verde

parpadeo(pinA,13,45);  // Parpadeo amarilla

digitalWrite(pinR,HIGH);
delay(pausa);  // esperamos apagado
digitalWrite(pinR,LOW);
parpadeo(pinR,23,56); // parpadeo rojo
}
