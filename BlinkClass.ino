#include "blinkClass.h"

unsigned int ledPin = LED_BUILTIN;
unsigned long delayN = 150;

blinkClass BlinkLed1(ledPin,delayN);

void setup() {
  // put your setup code here, to run once:
  BlinkLed1.initFunction();
}

void loop() {
  // put your main code here, to run repeatedly:
  BlinkLed1.blinkLed();


}
