#include <SoftwareSerial.h>

//define XbeeSerial(RX,TX);
SoftwareSerial xBeeSerial = SoftwareSerial( 0,1);


void setup()
{
  xBeeSerial.begin(9600); 
}

void loop(){
  xBeeSerial.print( "Hello");
  delay(10);
}
