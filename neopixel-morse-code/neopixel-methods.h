#ifndef NEOPIXEL_METHODS_H    // To make sure you don't declare the function more than once by including the header multiple times.
#define NEOPIXEL_METHODS_H

#include <Adafruit_NeoPixel.h>

const int ledPin = 17;
const int numLeds = 17;

Adafruit_NeoPixel strip = Adafruit_NeoPixel(numLeds, ledPin, NEO_RGB + NEO_KHZ800);

void setAllColor(const char * color, int delayTimeInMilliseconds = 250) {  
  const char * green = "green";
  const char * blue = "blue";

  // TODO : LOL
  // This doesn't seem to be working right now. :$
  // const char * red = "red";
  // if (strcmp (color, red) != 0) {
  //   for (int ledIndex = 0; ledIndex < 3; ledIndex++) {
  //     strip.setPixelColor(ledIndex, strip.Color(255, 0, 0));
  //   }
  // }

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
  strip.setPixelColor(
    ledIndex, 
    strip.Color(
      rand() % 255 + 1, // red
      rand() % 255 + 1, // green
      rand() % 255 + 1  // blue
    )
  );

  strip.show();
  delay(delayTimeInMilliseconds);
}

void setAllRandom(int delayTimeInMilliseconds = 250) {
  for (int ledIndex = 0; ledIndex < 3; ledIndex++) {
    strip.setPixelColor(
      ledIndex, 
      strip.Color(
        rand() % 255 + 1, // red
        rand() % 255 + 1, // green
        rand() % 255 + 1  // blue
      )
    );
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

void setAllOff(int delayTimeInMilliseconds = 250) {
  for (int ledIndex = 0; ledIndex < 3; ledIndex++) {
    strip.setPixelColor(ledIndex, strip.Color(0, 0, 0));
  }
  
  strip.show();
  delay(delayTimeInMilliseconds); 
}

#endif