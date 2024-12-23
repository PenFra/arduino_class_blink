#include "blinkClass.h"


/* Costruttore */
blinkClass::blinkClass(unsigned int pN, unsigned long period)
{

  pinNumber = pN;
  delayPeriod = period;
  
}

/* *************************************************************** */
/* Metodi pubblici */
void blinkClass::initFunction()
{

  pinMode(pinNumber, OUTPUT);


}



void blinkClass::blinkLed()
{

  digitalWrite(pinNumber, HIGH);
  delay(delayPeriod);
  digitalWrite(pinNumber, LOW);
  delay(delayPeriod);

}


