// TrafficLightcpp

#include "TrafficLight.h"


int myRedPin;
int myAmberPin;
int myGreenPin;


LED redLED = LED();
LED amberLED = LED();
LED greenLED = LED();


TrafficLight::TrafficLight(){

}

void TrafficLight::assignPins(int redPin, int amberPin, int greenPin){
 
  myRedPin = redPin ;
  myAmberPin = amberPin;
  myGreenPin = greenPin;

  redLED.assignPin(myRedPin);
  amberLED.assignPin(myAmberPin);
  greenLED.assignPin(myGreenPin);
 
}

void TrafficLight::red(){

  redLED.on();
  amberLED.off();
  greenLED.off();
  
}

void TrafficLight::redAmber(){

  redLED.on();
  amberLED.on();
  greenLED.off();
  
}

void TrafficLight::green(){

  redLED.off();
  amberLED.off();
  greenLED.on();
  
}

void TrafficLight::amber(){

  redLED.off();
  amberLED.on();
  greenLED.off();
  
}


void TrafficLight::cycle( int n ){

  int i;

  for ( i = 0; i < n ; i++ ){

    red();
    delay(2000);

    redAmber();
    delay(1000);

    green();
    delay(2000);

    amber();
    delay(1000);

  }





}



    void TrafficLight::allOff(){

        redLED.off();
        amberLED.off();
        greenLED.off();



    }
      void TrafficLight::allOn(){
      
        redLED.on();
        amberLED.on();
        greenLED.on();



      }
