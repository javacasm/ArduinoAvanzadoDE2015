int ledPin=9;  // PWM Pin
void setup()  // No es necesario usar pinMode
{ }
int MaxValor=100;
int pausa=20;
void loop() {
  for(int i=0;i<=MaxValor;i=i+1) // Bucle ascendente
  {
    analogWrite(ledPin,i);
    delay(pausa);
  }
  for(int i=MaxValor;i>=0;i=i-1) // Bucle descendente
  {
    analogWrite(ledPin,i);
    delay(pausa);
  }

}
