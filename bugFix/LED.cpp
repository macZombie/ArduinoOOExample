// LED.cpp

#include "LED.h"


int myPin;


LED::LED(){

}

void LED::assignPin(int pin){
 
  myPin = pin;

  pinMode(myPin, OUTPUT);


}



void LED::on(){
  digitalWrite(myPin,HIGH);

}

void LED::off(){
  digitalWrite(myPin,LOW);

}



void LED::flash(){

  int i;

  for ( i = 0; i < 4; i++ ){

    on();
    delay(100);
    off();
    delay(100);

  }



}
