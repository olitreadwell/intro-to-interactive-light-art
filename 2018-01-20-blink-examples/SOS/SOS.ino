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

void blink(int seconds) {
  on(seconds);
  off(seconds);
}

void sos() {

  for( int a = 0; a < 3; a = a + 1 ) {
    blink(250);
   }
  
  off(1000);
  
  for( int a = 0; a < 3; a = a + 1 ) {
    blink(2000);
   }

  off(1000);

  for( int a = 0; a < 3; a = a + 1 ) {
    blink(250);
  }

  off(1000);
}

void loop() {
  sos();
}
