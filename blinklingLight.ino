/*
  First project on Arduino UNO board. Uses pin 13 (L) to play with voltage and delays, making
  blink red light effect.
*/

// One-time launch instructions
void setup() {
    pinMode(13, OUTPUT);    // Setting up pin 13 as digital output component
}
// Looped actions
void loop() {
    // Turn voltage on (fade in) for 13 (L) pin
    for (int brightness = 0; brightness < 255; brightness++) { analogWrite(13, brightness); delay(10); }
    // Turn voltage off (fade out) for 13 (L) pin
    for (int brightness = 255; brightness > 0; brightness--) { analogWrite(13, brightness); delay(10); }
}
