#include <SoftwareSerial.h>

SoftwareSerial blue(10,11);

char num[21] = "Bluethooth HC-06";
char BPS = '4';
char PASS[5] = "1234";

void setup(){
  blue.begin(9600);
  pinMode(13, OUTPUT);
  digitalWrite(13, HIGH);
  delay(4000);

  digitalWrite(13, LOW);

  blue.print("AT");
  delay(1000);

  blue.print("AT+NAME");
  blue.print(num);
  delay(1000);

  blue.print("AT+BAUD");
  blue.print(BPS);

  blue.print("AT+PIN");
  blue.print(PASS);
  delay(1000);
}

void loop() {
  digitalWrite(13, !digitalRead(13));
  delay(300);
}
