#include <IRremote.h>

int RECV_PIN = 2;
IRrecv pin(RECV_PIN);
decode_results results;

void setup () {
  Serial.begin (9600);
  pin.enableIRIn ();
}

void loop () {
  if (pin.decode ()) 
  {
  // int results = results;
  Serial.println (pin.results.value, HEX);
  pin.resume ();
 }
}
//version2.8.0
