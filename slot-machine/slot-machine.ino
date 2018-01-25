/* 
    slot machine logic 

    the code below includes the code for a button, an led, and the neopixel devices

    in order to get this to work like a slot machine

    VERSION 1
    i'd want to be able to press the button
    the lights would then all light up different colors
    there would be a rotation of colors say 5 colors
    the colors would rotate at different speeds
    the colors would speed up and then slow down
    the colors would then eventually land on a single color
    if those colors are all the same color then
    that color will blink brightly 4 + times then go out
    if those colors are not all the same color then 
    that color will blink 1 more time and go out 
    if i press the button again this process will start over 

    VERSION 2
    press the button
    random color between 1 and 3 selected 3 times
    neopixels light up red green and blue depending
    this means that any neopixel can be any of the colors including having them all start on the same color
    a number of movements forward will be chosen between 15-20 for each neopixel
    each neopixel will iterate from there starting number 1, 2, 3 
    through the following numbers
    rotating from red to green to blue
    so moving two steps forward from green, would take you to blue, than to red
    after the number of movements for each neopixel has concluded
    the colors will stop and stay that way for a few seconds like it is thinking
    if none of the colors are the same
    the neopixels will blink twice and then go off
    if two of the colors are the same
    the neopixels that are the same will blink three times and then go off
    if all three of the colors are the same
    all three of the neopixels will blink 5+ times and then turn off 

    buy pressing the button again this process begins anew
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// /* LED Blink, Teensyduino Tutorial #1
//    http://www.pjrc.com/teensy/tutorial.html
 
//    This example code is in the public domain.
// */

// // Teensy 2.0 has the LED on pin 11
// // Teensy++ 2.0 has the LED on pin 6
// // Teensy 3.x / Teensy LC have the LED on pin 13
// const int ledPin = 13;
// const int buttonPin = 1;

// // the setup() method runs once, when the sketch starts

// void setup() {
//   // initialize the digital pin as an output.
//   pinMode(ledPin, OUTPUT);
//   pinMode(buttonPin, INPUT_PULLUP);
// }

// void off(int seconds) {
//   digitalWrite(ledPin, LOW);    // set the LED off
//   delay(seconds);                  // wait for a second
// }

// void on(int seconds) {
//   digitalWrite(ledPin, HIGH);   // set the LED on
//   delay(seconds);                  // wait for a second
// }

// void blink(int onSeconds, int offSeconds = 0) {
//   if (offSeconds == 0) {
//     on(onSeconds);
//     off(onSeconds);
//   }
//   else {
//     on(onSeconds);
//     off(offSeconds);
//   } 
// }

// void loop() {
//   int buttonState;

//   buttonState = digitalRead(buttonPin);

//   if (buttonState == HIGH)
//   {
//     blink(1000);
//   }
// }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// #include <Adafruit_NeoPixel.h>


// const int ledPin = 17;
// const int numLeds = 17;
// const int potPin = 23;

// Adafruit_NeoPixel strip = Adafruit_NeoPixel(numLeds, ledPin, NEO_RGB + NEO_KHZ800);

// void setup() {
//   strip.begin();
// }

// void setAllColor(const char * color) {
//   const char * red = "red";
//   const char * green = "green";
//   const char * blue = "blue";

//   if (strcmp (color, red) != 0) {
//     strip.setPixelColor(0, strip.Color(255, 0, 0));
//     strip.setPixelColor(1, strip.Color(255, 0, 0));
//     strip.setPixelColor(2, strip.Color(255, 0, 0));  
//   }

//   if (strcmp (color, green) != 0) {
//     strip.setPixelColor(0, strip.Color(0, 255, 0));
//     strip.setPixelColor(1, strip.Color(0, 255, 0));
//     strip.setPixelColor(2, strip.Color(0, 255, 0));  
//   }

//   if (strcmp (color, blue) != 0) {
//     strip.setPixelColor(0, strip.Color(0, 0, 255));
//     strip.setPixelColor(1, strip.Color(0, 0, 255));
//     strip.setPixelColor(2, strip.Color(0, 0, 255));  
//   }

//   strip.show();
//   delay(500);
// }

// void setAllRed() {
//   setAllColor("red");
//   // strip.setPixelColor(0, strip.Color(63, 0 , 0));
//   // strip.setPixelColor(1, strip.Color(63, 0 , 0));
//   // strip.setPixelColor(2, strip.Color(63, 0 , 0));

//   // strip.show();
//   // if (millisecondsDelay != 500) {
//   //   delay(millisecondsDelay);
//   // } else {
//   //   delay(500);
//   // }
// }

// void setAllGreen() {
//   setAllColor("green");
//   // strip.setPixelColor(0, strip.Color(0, 63, 0));
//   // strip.setPixelColor(1, strip.Color(0, 63, 0));
//   // strip.setPixelColor(2, strip.Color(0, 63, 0));

//   // strip.show();
//   // if (millisecondsDelay != 500) {
//   //   delay(millisecondsDelay);
//   // } else {
//   //   delay(500);
//   // }
// }

// void setAllBlue() {
//   setAllColor("blue");
//   // strip.setPixelColor(0, strip.Color(0, 0 , 63));
//   // strip.setPixelColor(1, strip.Color(0, 0 , 63));
//   // strip.setPixelColor(2, strip.Color(0, 0 , 63));
  
//   // strip.show();

//   // if (millisecondsDelay != 500) {
//   //   delay(millisecondsDelay);
//   // } else {
//   //   delay(500);
//   // }
// }

// void loop() {
//   setAllRed();
//   setAllGreen();
//   setAllBlue();
// }