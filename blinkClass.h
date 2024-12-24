#ifndef BLINKCLASS_H
#define BLINKCLASS_H


#include <Arduino.h>


class blinkClass
{

  public:
    blinkClass(unsigned int pN, unsigned long period);
    void initFunction();
    void blinkLed();


  private:
    unsigned int pinNumber;         /* Numero del pin da inizializzare come uscita */
    unsigned long delayPeriod;      /* Tempo di ritardo del lampeggio */



};






#endif