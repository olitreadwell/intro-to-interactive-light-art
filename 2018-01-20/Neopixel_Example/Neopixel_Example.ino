#include <Adafruit_NeoPixel.h>


const int ledPin = 17;
const int numLeds = 17;
const int potPin = 23;

Adafruit_NeoPixel strip = Adafruit_NeoPixel(numLeds, ledPin, NEO_RGB + NEO_KHZ800);

void setup() {
  strip.begin();
}

void setAllColor(const char * color) {
  const char * red = "red";
  const char * green = "green";
  const char * blue = "blue";

  if (strcmp (color, red) != 0) {
    strip.setPixelColor(0, strip.Color(255, 0, 0));
    strip.setPixelColor(1, strip.Color(255, 0, 0));
    strip.setPixelColor(2, strip.Color(255, 0, 0));  
  }

  if (strcmp (color, green) != 0) {
    strip.setPixelColor(0, strip.Color(0, 255, 0));
    strip.setPixelColor(1, strip.Color(0, 255, 0));
    strip.setPixelColor(2, strip.Color(0, 255, 0));  
  }

  if (strcmp (color, blue) != 0) {
    strip.setPixelColor(0, strip.Color(0, 0, 255));
    strip.setPixelColor(1, strip.Color(0, 0, 255));
    strip.setPixelColor(2, strip.Color(0, 0, 255));  
  }

  strip.show();
  delay(500);
}

void setAllRed() {
  setAllColor("red");
  // strip.setPixelColor(0, strip.Color(63, 0 , 0));
  // strip.setPixelColor(1, strip.Color(63, 0 , 0));
  // strip.setPixelColor(2, strip.Color(63, 0 , 0));

  // strip.show();
  // if (millisecondsDelay != 500) {
  //   delay(millisecondsDelay);
  // } else {
  //   delay(500);
  // }
}

void setAllGreen() {
  setAllColor("green");
  // strip.setPixelColor(0, strip.Color(0, 63, 0));
  // strip.setPixelColor(1, strip.Color(0, 63, 0));
  // strip.setPixelColor(2, strip.Color(0, 63, 0));

  // strip.show();
  // if (millisecondsDelay != 500) {
  //   delay(millisecondsDelay);
  // } else {
  //   delay(500);
  // }
}

void setAllBlue() {
  setAllColor("blue");
  // strip.setPixelColor(0, strip.Color(0, 0 , 63));
  // strip.setPixelColor(1, strip.Color(0, 0 , 63));
  // strip.setPixelColor(2, strip.Color(0, 0 , 63));
  
  // strip.show();

  // if (millisecondsDelay != 500) {
  //   delay(millisecondsDelay);
  // } else {
  //   delay(500);
  // }
}

void loop() {
  setAllRed();
  setAllGreen();
  setAllBlue();
}