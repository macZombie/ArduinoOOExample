// TrafficLight.h

#ifndef TrafficLight_h
#define TrafficLight_h
#include "Arduino.h"
#include "./LED.h"





class TrafficLight{
    public:
      TrafficLight::TrafficLight();
      void TrafficLight::assignPins(int redPin, int amberPin, int greenPin);
      void TrafficLight::red();
      void TrafficLight::redAmber();
      void TrafficLight::green();
      void TrafficLight::amber();
      void TrafficLight::cycle(int n);
      void TrafficLight::allOff();
      void TrafficLight::allOn();
      





      
    private:
      int myRedPin;
      int myAmberPin;
      int myGreenPin;
      LED redLED;
      LED amberLED;
      LED greenLED;



};

#endif