#include <Adafruit_NeoPixel.h>
#include "neopixel-methods.h"

const int buttonPin = 1;

// the setup() method runs once, when the sketch starts

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  strip.begin();
}

void loop() {
  int buttonState;

  buttonState = digitalRead(buttonPin);

  if (buttonState == LOW)
  {
    for (int ledIndex = 0; ledIndex < 3; ledIndex++) {
      setRandom(ledIndex);
    }
    setAllRandom();
  } else {
    setAllOff();
  }

}