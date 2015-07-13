int pinV=13, pinA=12, pinR=11,pausa=500;
void setup() {   // Configuracion
pinMode(pinV,OUTPUT);  pinMode(pinA,OUTPUT);  pinMode(pinR,OUTPUT); 
Serial.begin(9600); // configurando con el PC
}

void parpadeo(int ledParpadeo,int nParpadeo,int pausaParpadeo)
{   for(int i=0;i<nParpadeo;i=i+1)   // for(inicializacion;comprobacion;incremento)
  { digitalWrite(ledParpadeo,HIGH);
    delay(pausaParpadeo);
    digitalWrite(ledParpadeo,LOW);
    delay(pausaParpadeo);   } }

void loop()  { // Bucle
int valor=analogRead(A0);  // Leemos el potenciometro
pausa=valor;               // pausa tendrá el valor del pot (entre 0 y 1023)
Serial.println(valor);     // Envia a PC  valor 
digitalWrite(pinV,HIGH);   // Encendemos 
delay(pausa);  // esperamos encendido
digitalWrite(pinV,LOW);
parpadeo(pinV,12,pausa/30);  // Parpadeo verde
parpadeo(pinA,13,pausa/25);  // Parpadeo amarilla
digitalWrite(pinR,HIGH);
delay(pausa);  // esperamos apagado
digitalWrite(pinR,LOW);
parpadeo(pinR,23,pausa/30); // parpadeo rojo
}
