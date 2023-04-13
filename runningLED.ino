const int RED = 9;    // 9 pin for red
const int GREEN = 10; // 10 pin for green
const int BLUE = 11;  // 11 pin for blue
void setup() {
  // Setting up used pins for output
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
}

void loop() {
  int brightB = 0;
  int brightR = 0;
  for (brightB; brightB <= 255; brightB++) { analogWrite(BLUE, brightB); delay(50); }
  for (brightR; brightR <= 255; brightR++) { analogWrite(RED, brightR); delay(50); }
  delay(500);
}
