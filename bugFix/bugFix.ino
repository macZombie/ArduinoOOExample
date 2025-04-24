#include "./TrafficLight.h"


const int redLEDPin = 5;
const int amberLEDPin = 6;
const int greenLEDPin = 7;



TrafficLight trafficLight = TrafficLight();

void setup() {

  trafficLight.assignPins(redLEDPin, amberLEDPin, greenLEDPin);

  trafficLight.cycle(4);

  trafficLight.allOff();

}

void loop() {


}
