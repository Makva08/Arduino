#include <Otto9.h>
Otto9 Otto;
const char data[] = "VARIABLE#";
unsigned long int matrix;
#define PIN_YL 2 // left leg, servo[0]
#define PIN_YR 3 // right leg, servo[1]
#define PIN_RL 4 // left foot, servo[2]
#define PIN_RR 5 // right foot, servo[3]
#define PIN_Trigger 8 // ultrasound
#define PIN_Echo 9 // ultrasound
#define PIN_Buzzer  13 //buzzer
#define DIN_PIN A3
#define CS_PIN A2
#define CLK_PIN A1
#define LED_DIRECTION 1
void setup() {
  Otto.init(PIN_YL, PIN_YR, PIN_RL, PIN_RR, true, A6, PIN_Buzzer, PIN_Trigger, PIN_Echo);
  Otto.initMATRIX( DIN_PIN, CS_PIN, CLK_PIN, LED_DIRECTION);
    Otto.home();
}
void loop() {
     Otto.setLed(0,0,0); Otto.setLed(0,1,0); Otto.setLed(0,2,0); Otto.setLed(0,3,0); Otto.setLed(0,4,0); Otto.setLed(0,5,0); Otto.setLed(0,6,0); Otto.setLed(0,7,0); Otto.setLed(1,0,0); Otto.setLed(1,1,1); Otto.setLed(1,2,1); Otto.setLed(1,3,0); Otto.setLed(1,4,1); Otto.setLed(1,5,1); Otto.setLed(1,6,1); Otto.setLed(1,7,1); Otto.setLed(2,0,0); Otto.setLed(2,1,1); Otto.setLed(2,2,0); Otto.setLed(2,3,1); Otto.setLed(2,4,1); Otto.setLed(2,5,0); Otto.setLed(2,6,0); Otto.setLed(2,7,0); Otto.setLed(3,0,0); Otto.setLed(3,1,0); Otto.setLed(3,2,1); Otto.setLed(3,3,0); Otto.setLed(3,4,1); Otto.setLed(3,5,0); Otto.setLed(3,6,0); Otto.setLed(3,7,0); Otto.setLed(4,0,0); Otto.setLed(4,1,0); Otto.setLed(4,2,1); Otto.setLed(4,3,0); Otto.setLed(4,4,1); Otto.setLed(4,5,0); Otto.setLed(4,6,0); Otto.setLed(4,7,0); Otto.setLed(5,0,0); Otto.setLed(5,1,1); Otto.setLed(5,2,0); Otto.setLed(5,3,1); Otto.setLed(5,4,1); Otto.setLed(5,5,1); Otto.setLed(5,6,1); Otto.setLed(5,7,1); Otto.setLed(6,0,0); Otto.setLed(6,1,1); Otto.setLed(6,2,1); Otto.setLed(6,3,0); Otto.setLed(6,4,0); Otto.setLed(6,5,0); Otto.setLed(6,6,0); Otto.setLed(6,7,0); Otto.setLed(7,0,0); Otto.setLed(7,1,0); Otto.setLed(7,2,0); Otto.setLed(7,3,0); Otto.setLed(7,4,0); Otto.setLed(7,5,0); Otto.setLed(7,6,0); Otto.setLed(7,7,0);
}
