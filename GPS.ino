#include <TinyGPSPlus.h>
#include <SoftwareSerial.h>

static const int RXPin = 0, TXPin = 1;
static const uint32_t GPSBaud = 9600;

TinyGPSPlus gps;
SoftwareSerial ss(RXPin, TXPin);

void setup(){
 Serial.begin(9600);
 ss.begin(GPSBaud);
}

void loop(){
 while (ss.available() > 0){
   char temp = ss.read();
   gps.encode(temp);
   //Serial.write(temp);
 }
 Serial.print(gps.location.lat(),6);
 Serial.print(" ; ");
 Serial.print(gps.location.lng(),6);
 Serial.print(" ; ");
 Serial.println(gps.satellites.value()); 
 
}
