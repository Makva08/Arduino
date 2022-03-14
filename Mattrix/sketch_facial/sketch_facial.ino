//ამ კოდით სახის გამომეტყველებებს შევქმნით
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

void loop(){ 
    
    //სახე
    byte smile[8]=   {0x3C,0x42,0xA5,0x81,0xA5,0x99,0x42,0x3C};   //უკვე გამზადებული ერრეიები ჰექსადესიმალ ბაით რეფრეზენთეიშენი სახეების შესაცვლელად
    byte neutral[8]= {0x3C,0x42,0xA5,0x81,0xBD,0x81,0x42,0x3C};
    byte sad[8]=   {0x3C,0x42,0xA5,0x81,0x99,0xA5,0x42,0x3C};

    printByte(smile);
     
    delay(1000);

    printByte(neutral);
    
    delay(1000);

    printByte(sad);    

    delay(1000);
}
void printByte(byte character [])
{
  int i = 0;
  for(i=0;i<8;i++)
  {
    lc.setRow(0,i,character[i]);
  }
}
