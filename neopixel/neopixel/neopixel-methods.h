#ifndef NEOPIXEL_METHODS_H    // To make sure you don't declare the function more than once by including the header multiple times.
#define NEOPIXEL_METHODS_H

#include <Adafruit_NeoPixel.h>

const int ledPin = 17;
const int numLeds = 17;

Adafruit_NeoPixel strip = Adafruit_NeoPixel(numLeds, ledPin, NEO_RGB + NEO_KHZ800);

void setAllColor(const char * color, int delayTimeInMilliseconds = 250) {
  const char * red = "red";
  const char * green = "green";
  const char * blue = "blue";

  if (strcmp (color, red) != 0) {
    for (int ledIndex = 0; ledIndex < 3; ledIndex++) {
      strip.setPixelColor(ledIndex, strip.Color(255, 0, 0));
    }
  }

  if (strcmp (color, green) != 0) {
    for (int ledIndex = 0; ledIndex < 3; ledIndex++) {
      strip.setPixelColor(ledIndex, strip.Color(0, 255, 0));
    }
  }

  if (strcmp (color, blue) != 0) {
    for (int ledIndex = 0; ledIndex < 3; ledIndex++) {
      strip.setPixelColor(ledIndex, strip.Color(0, 0, 255));
    }
  }

  strip.show();
  delay(delayTimeInMilliseconds);
}

void setRandom(const int ledIndex, int delayTimeInMilliseconds = 250) {
  const int redValue = rand() % 255 + 1;
  const int greenValue = rand() % 255 + 1;
  const int blueValue = rand() % 255 + 1;
  
  strip.setPixelColor(ledIndex, strip.Color(redValue, greenValue, blueValue));
  strip.show();
  delay(delayTimeInMilliseconds);
}

void setAllRandom(int delayTimeInMilliseconds = 250) {
  const int redValue = rand() % 255 + 1;
  const int greenValue = rand() % 255 + 1;
  const int blueValue = rand() % 255 + 1;

  for (int ledIndex = 0; ledIndex < 3; ledIndex++) {
    strip.setPixelColor(ledIndex, strip.Color(redValue, greenValue, blueValue));
  }
  strip.show();
  delay(delayTimeInMilliseconds);
}

void setAllRed(int delayTimeInMilliseconds = 250) {
  for (int ledIndex = 0; ledIndex < 3; ledIndex++) {
    strip.setPixelColor(ledIndex, strip.Color(255, 0, 0));
  }

  strip.show();
  delay(delayTimeInMilliseconds);
}

void setAllGreen() {
  setAllColor("green");
}

void setAllBlue() {
  setAllColor("blue");
}

void setAllOff() {
  for (int ledIndex = 0; ledIndex < 3; ledIndex++) {
    strip.setPixelColor(ledIndex, strip.Color(0, 0, 0));
  }
  
  strip.show();
  delay(500); 
}

#endif