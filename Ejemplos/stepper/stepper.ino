#include <AccelStepper.h>
#define HALFSTEP 8
#define motorPin1 3
#define motorPin2 4
#define motorPin3 5
#define motorPin4 6
AccelStepper stepper1(HALFSTEP,motorPin1,motorPin3,motorPin2,motorPin4);
void setup() {
  stepper1.setMaxSpeed(1000.0);
  stepper1.setAcceleration(100.0);
  stepper1.setSpeed(200);
  stepper1.moveTo(200000);}
void loop() {
  if(stepper1.distanceToGo()==0) 
  { stepper1.moveTo(-stepper1.currentPosition()); }
  stepper1.run(); // Actualizamos la posición.
}
