// LED.h

#ifndef LED_h
#define LED_h
#include "Arduino.h"





class LED{
    public:
      LED::LED();
      void LED::assignPin(int value);
      void set(int value);
      void on();
      void off();
      void LED::flash();
      



    private:
      int myPin;
     


};

#endif