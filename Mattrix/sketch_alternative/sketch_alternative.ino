
#include <LedControl.h>
int DIN = A3;
int CS =  A2;
int CLK = A0;

LedControl lc=LedControl(DIN,CLK,CS,0);

void setup(){
 lc.shutdown(0,false);       
 lc.setIntensity(0,15);      //შეგიძლიათ სიკაშკაშე შეცვალოთ 0დან 15მდე (მაგალითად (0,5) დაწეროთ)
 lc.clearDisplay(0);    
}
void loop() {
  //ალტერნატიული
    byte d1[8]= {0xAA,0x55,0xAA,0x55,0xAA,0x55,0xAA,0x55};
    byte d2[8]= {0x55,0xAA,0x55,0xAA,0x55,0xAA,0x55,0xAA};
    //ალტერნატიული
    printByte(d1);
    delay(100);

    printByte(d2);
    delay(100);
}

void printByte(byte character [])
{
  int i = 0;
  for(i=0;i<8;i++)
  {
    lc.setRow(0,i,character[i]);
  }
}
