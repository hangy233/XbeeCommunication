#include <SoftwareSerial.h>

//define XbeeSerial(RX,TX);
SoftwareSerial xBeeSerial = SoftwareSerial( 9,10);
char GotChar;

void setup()
{
  xBeeSerial.begin(9600);
  Serial.begin(9600);
}

void loop(){
 if ( xBeeSerial.available() ) {
      GotChar = xBeeSerial.read();
      Serial.print(GotChar,BYTE);
  }
}
