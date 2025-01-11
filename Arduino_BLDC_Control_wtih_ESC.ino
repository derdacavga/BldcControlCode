#include <Servo.h>

Servo esc;

const int potPin = A0;
const int escPin = 9;

void setup() {

  esc.attach(escPin);
  esc.writeMicroseconds(1000);  
  
  delay(2000);
}

void loop() {

  int potValue = analogRead(potPin);
  int escSignal = map(potValue, 0, 1023, 1000, 2000);

  esc.writeMicroseconds(escSignal);

  delay(20);
}