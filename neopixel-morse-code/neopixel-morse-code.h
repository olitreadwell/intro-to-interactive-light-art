#ifndef NEOPIXEL_MORSE_CODE_H    // To make sure you don't declare the function more than once by including the header multiple times.
#define NEOPIXEL_MORSE_CODE_H

#include <Adafruit_NeoPixel.h>
#include "neopixel-methods.h"
#include "morse-code-array.h"

void dot() {
  for (int ledIndex = 0; ledIndex < 3; ledIndex++) {
    strip.setPixelColor(
      ledIndex, 
      strip.Color(
        255, // red
        255, // green
        255  // blue
      )
    );
  };
  strip.show();
  delay(500);

  for (int ledIndex = 0; ledIndex < 3; ledIndex++) {
    strip.setPixelColor(
      ledIndex, 
      strip.Color(
        0, // red
        0, // green
        0  // blue
      )
    );
  }
  strip.show();
  delay(500);
}

void dash() {
  for (int ledIndex = 0; ledIndex < 3; ledIndex++) {
    strip.setPixelColor(ledIndex,
      strip.Color(255, 255, 255)
    );
  }
  strip.show();
  delay(2000);

  for (int ledIndex = 0; ledIndex < 3; ledIndex++) {
    strip.setPixelColor(ledIndex,
      strip.Color(0, 0, 0)
    );
  }
  strip.show();
  delay(2000);
}

void space(){
  setAllOff(5000);
}

void a() {
  dot();
  dash();
}

void b() {
  dash();
  dot();
  dot();
  dot();
}


void c(){
  dash();
  dot();
  dash();
  dot();
}

void d(){
  dash();
  dot();
  dot();
}

void e(){
  dot();
}

void f(){
  dot();
  dot();
  dash();
  dot();
}

void g(){
  dash();
  dash();
  dot();
}

void h(){
  dot();
  dot();
  dot();
  dot();
}

void i(){
  dot();
  dot();
}

void j(){
  dot();
  dash();
  dash();
  dash();
}

void k(){
  dash();
  dot();
  dash();
}

void l(){
  dot();
  dash();
  dot();
  dot();
}

void m(){
  dash();
  dash();
}

void n(){
  dash();
  dot();
}

void o(){
  dash();
  dash();
  dash();
}

void p(){
  dot();
  dash();
  dash();
  dot();
}

void q(){
  dash();
  dash();
  dot();
  dash();
}

void r(){
  dot();
  dash();
  dot();
}

void s(){
  dot();
  dot();
  dot();
}

void t(){
  dash();
}

void u(){
  dot();
  dot();
  dash();
}

void v(){
  dot();
  dot();
  dot();
  dash();
}

void w(){
  dot();
  dash();
  dash();
}

void x(){
  dash();
  dot();
  dot();
  dash();
}

void y(){
  dash();
  dot();
  dash();
  dash();
}

void z(){
  dash();
  dash();
  dot();
  dot();

};

void one(){
  dot();
  dash();
  dash();
  dash();
  dash();
}

void two(){
  dot();
  dot();
  dash();
  dash();
  dash();
}

void three(){
  dot();
  dot();
  dot();
  dash();
  dash();
}

void four(){
  dot();
  dot();
  dot();
  dot();
  dash();
}

void five(){
  dot();
  dot();
  dot();
  dot();
  dot();
}

void six(){
  dash();
  dot();
  dot();
  dot();
  dot();
}

void seven(){
  dash();
  dash();
  dot();
  dot();
  dot();
}

void eight(){
  dash();
  dash();
  dash();
  dot();
  dot();
}

void nine(){
  dash();
  dash();
  dash();
  dash();
  dot();
}

void zero(){
  dash();
  dash();
  dash();
  dash();
  dash();
}

#endif