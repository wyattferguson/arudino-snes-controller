
#include "snes-controller.h"

// Black Wire - GND
// Red Wire - 5V
const int DATA_PIN = 2;   // Green Wire
const int LATCH_PIN = 3;  // Purple Wire
const int CLOCK_PIN = 4;  // Blue Wire

SNES_Controller controller;

void setup(){
  Serial.begin(19200);

  controller.init(LATCH_PIN, CLOCK_PIN, DATA_PIN);
  
  Serial.println("// SNES Controller Demo");
}


void loop(){
  controller.poll(); // poll controller for buttons being pressed
  
  if(controller.pressed(START))
    Serial.println("START");

  if(controller.pressed(A))
    Serial.println("A");

  if(controller.pressed(B))
    Serial.println("B");

  if(controller.pressed(UP))
    Serial.println("UP");

  if(controller.pressed(DOWN))
    Serial.println("DOWN");

  if(controller.pressed(LEFT))
    Serial.println("LEFT");

  if(controller.pressed(RIGHT))
    Serial.println("RIGHT");

  delay(100);
}


