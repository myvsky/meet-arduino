// One-time launch instructions
void setup() {
    pinMode(13, OUTPUT);    // Setting up pin 13 as digital output component
}

// Looped actions
void loop() {
    // Turn voltage on for 13 (L) pin
    digitalWrite(13, HIGH);
    delay(250);
    // Turn voltage off for 13 (L) pin
    digitalWrite(13, LOW);
    delay(250);
}
