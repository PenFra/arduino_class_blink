#include "blinkClass.h"


/* Costruttore */
blinkClass::blinkClass(unsigned int pN, unsigned long period)
{

  pinNumber = pN;
  delayPeriod = period;
  
}

/* ****************************************************************/
/*                      Metodi pubblici                           */
/* ****************************************************************/

/* Metodo iniziale assegna il pin come output */
void blinkClass::initFunction()
{

  pinMode(pinNumber, OUTPUT);


}


/* Metodo lampeggia il led */
void blinkClass::blinkLed()
{

  digitalWrite(pinNumber, HIGH);
  delay(delayPeriod);
  digitalWrite(pinNumber, LOW);
  delay(delayPeriod);

}


