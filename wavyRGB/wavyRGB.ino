// First LED and its initial light brightness
const short b1 = 3;
short b1l = 0;        // This color is the first in loop of LED1
const short g1 = 5;
short g1l = 0;
const short r1 = 6;
short r1l = 0;

// Second LED and its initial light brightness
const short b2 = 9;
short b2l = 0;
const short g2 = 10;
short g2l = 0;
const short r2 = 11;    
short r2l = 0;          // This color is first in loop of LED2

// Macro for 10ms delay
#define d delay(10);

void setup() {
  pinMode(b1, OUTPUT);
  pinMode(g1, OUTPUT);
  pinMode(r1, OUTPUT);

  pinMode(b2, OUTPUT);
  pinMode(g2, OUTPUT);
  pinMode(r2, OUTPUT);
}

void loop() {
  // LED1 blue fade in and LED1 red fade out
  while (b1l < 255) { analogWrite(b1, b1l); b1l++; if (r1l > 0) { analogWrite(r1, r1l); r1l--; } d(10); }
  // LED2 blue fade in and LED1 red fade out
  while (b2l < 255) { analogWrite(b2, b2l); b2l++; if (r2l > 0) { analogWrite(r2, r2l); r2l--; } d(10); }
  // LED1 green fade in and LED1 blue fade out
  while (g1l < 255) { analogWrite(g1, g1l); g1l++; analogWrite(b1, b1l); b1l--; d(10); }
  // LED2 green fade in and LED2 blue fade out
  while (g2l < 255) { analogWrite(g2, g2l); g2l++; analogWrite(b2, b2l); b2l--; d(10); }
  // LED1 red fade in and LED1 green fade out
  while (r1l < 255) { analogWrite(r1, r1l); r1l++; analogWrite(g1, g1l); g1l--; d(10); }
  // LED2 red fade in and LED2 green fade out
  while (r2l < 255) { analogWrite(r2, r2l); r2l++; analogWrite(g2, g2l); g2l--; d(10); }
}
