
#pragma once

// Fixed button indexs from controller
enum BUTTON{
  B = 0,
  Y = 1,
  SELECT = 2,
  START = 3,
  UP = 4,
  DOWN = 5,
  LEFT = 6,
  RIGHT = 7,
  A = 8,
  X = 9,
  L = 10,
  R = 11,
};

class SNES_Controller{
  public:

  int latch_pin;
  int clock_pin;
  int data_pin;

  int buttons[12] = {-1};

  // Setup controller pins
  void init(int latch, int clock, int data){
    latch_pin = latch;
    clock_pin = clock;
    data_pin = data;

    pinMode(latch_pin, OUTPUT);
    digitalWrite(latch_pin, LOW);
    pinMode(clock_pin, OUTPUT);
    digitalWrite(clock_pin, HIGH);
    pinMode(data_pin, INPUT_PULLUP);
  }

  // Trigger controller to pull button statuses
  void poll(){
    // toggle latch, controller will lockin button states
    digitalWrite(latch_pin, HIGH);
    delayMicroseconds(12);
    digitalWrite(latch_pin, LOW);  
    delayMicroseconds(6);

    for(int i = 0; i < 12; i++){
      buttons[i] = !digitalRead(data_pin);  // Invert pin read, controller sends a 0 for pushed.

      // toggle clock to trigger send next button state
      digitalWrite(clock_pin, LOW);
      delayMicroseconds(6);
      digitalWrite(clock_pin, HIGH);
      delayMicroseconds(6);
    }
  }

  // Is a given button pressed down
  bool pressed(BUTTON b){
    return buttons[b];
  }
};

