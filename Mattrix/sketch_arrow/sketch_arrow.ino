#include <Otto9.h>
Otto9 Otto;

const char data[] = "VARIABLE#";
unsigned long int matrix;

#define DIN_PIN A3
#define CS_PIN A2
#define CLK_PIN A1
#define LED_DIRECTION 1

void setup() {
  Otto.initMATRIX( DIN_PIN, CS_PIN, CLK_PIN, LED_DIRECTION);
}

void loop() {
   Otto.setLed(0,0,0); Otto.setLed(0,1,0); Otto.setLed(0,2,0); Otto.setLed(0,3,0); Otto.setLed(0,4,0); Otto.setLed(0,5,0); Otto.setLed(0,6,0); Otto.setLed(0,7,0); Otto.setLed(1,0,0); Otto.setLed(1,1,0); Otto.setLed(1,2,0); Otto.setLed(1,3,0); Otto.setLed(1,4,0); Otto.setLed(1,5,0); Otto.setLed(1,6,0); Otto.setLed(1,7,0); Otto.setLed(2,0,0); Otto.setLed(2,1,0); Otto.setLed(2,2,1); Otto.setLed(2,3,1); Otto.setLed(2,4,1); Otto.setLed(2,5,1); Otto.setLed(2,6,1); Otto.setLed(2,7,0); Otto.setLed(3,0,0); Otto.setLed(3,1,0); Otto.setLed(3,2,1); Otto.setLed(3,3,1); Otto.setLed(3,4,0); Otto.setLed(3,5,0); Otto.setLed(3,6,0); Otto.setLed(3,7,0); Otto.setLed(4,0,0); Otto.setLed(4,1,0); Otto.setLed(4,2,0); Otto.setLed(4,3,0); Otto.setLed(4,4,1); Otto.setLed(4,5,0); Otto.setLed(4,6,0); Otto.setLed(4,7,0); Otto.setLed(5,0,0); Otto.setLed(5,1,0); Otto.setLed(5,2,0); Otto.setLed(5,3,1); Otto.setLed(5,4,0); Otto.setLed(5,5,0); Otto.setLed(5,6,0); Otto.setLed(5,7,0); Otto.setLed(6,0,0); Otto.setLed(6,1,0); Otto.setLed(6,2,1); Otto.setLed(6,3,1); Otto.setLed(6,4,1); Otto.setLed(6,5,1); Otto.setLed(6,6,1); Otto.setLed(6,7,0); Otto.setLed(7,0,0); Otto.setLed(7,1,0); Otto.setLed(7,2,0); Otto.setLed(7,3,0); Otto.setLed(7,4,0); Otto.setLed(7,5,0); Otto.setLed(7,6,0); Otto.setLed(7,7,0);
}
