// Create variables for each pin
const short b1 = 2;
const short g1 = 3;
const short r = 4;
const short g2 = 5;
const short b2 = 6;

// Macro for delay time
#define d delay(750);

void setup() {
  pinMode(b1, OUTPUT);
  pinMode(g1, OUTPUT);
  pinMode(r, OUTPUT);
  pinMode(g2, OUTPUT);
  pinMode(b2, OUTPUT);
}

void loop() {
  digitalWrite(b1, HIGH);
  d;
  digitalWrite(b1, LOW);
  digitalWrite(g1, HIGH);
  d;
  digitalWrite(g1, LOW);
  digitalWrite(r, HIGH);
  d;
  digitalWrite(r, LOW);
  digitalWrite(g2, HIGH);
  d;
  digitalWrite(g2, LOW);
  digitalWrite(b2, HIGH);
  d;
  digitalWrite(b2,LOW);
  digitalWrite(g2, HIGH);
  d;
  digitalWrite(g2, LOW);
  digitalWrite(r, HIGH);
  d;
  digitalWrite(r, LOW);
  digitalWrite(g1, HIGH);
  d;
  digitalWrite(g1, LOW);
}