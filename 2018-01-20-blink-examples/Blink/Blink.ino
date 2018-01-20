/* LED Blink, Teensyduino Tutorial #1
   http://www.pjrc.com/teensy/tutorial.html
 
   This example code is in the public domain.
*/

// Teensy 2.0 has the LED on pin 11
// Teensy++ 2.0 has the LED on pin 6
// Teensy 3.x / Teensy LC have the LED on pin 13
const int ledPin = 13;
const int bunttonPin = 1;

// the setup() method runs once, when the sketch starts

void setup() {
  // initialize the digital pin as an output.
  pinMode(ledPin, OUTPUT);
  pinMode(bunttonPin, INPUT_PULLUP);
}

void off(int seconds) {
  digitalWrite(ledPin, LOW);    // set the LED off
  delay(seconds);                  // wait for a second
}

void on(int seconds) {
  digitalWrite(ledPin, HIGH);   // set the LED on
  delay(seconds);                  // wait for a second
}

void blink(int onSeconds, int offSeconds = 0) {
  if (offSeconds == 0) {
    on(onSeconds);
    off(onSeconds);
  }
  else {
    on(onSeconds);
    off(offSeconds);
  } 
}

void loop() {
  int buttonState;

  buttonState = digitalRead(bunttonPin);

  if (buttonState == HIGH)
  {
    blink(1000);
  }
}

