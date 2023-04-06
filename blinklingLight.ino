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
    digitalWrite(13, HIGH); // Turn voltage on for 13 (L) pin
    delay(500);            // 1000ms (1s) delay
    digitalWrite(13, LOW); // Turn voltage off for 13 (L) pin
    delay(500);
}
