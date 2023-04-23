// First LED and its initial light brightness
const short b1 = 3;
short b1l = 128;        // This color is the first in loop of LED1
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
  // LED1 blue and LED2 red fade in
  while (b1l < 255) {

    // LED1 red fade out when it's not first cycle of loop
    if (r1l > 0) { r1l--; analogWrite(r1, r1l); }
    // LED2 blue fade out when it's not first cycle of loop
    if (b2l > 0) { b2l--; analogWrite(b2, b2l); }

    analogWrite(b1, b1l);   // LED1 blue color
    analogWrite(r2, r2l);   // LED2 red color
    r2l++;
    b1l++;
    d;
  }

  // LED1 green fade in
  while (g1l < 255) {
    
    // When green is half-part LED1, blue LED1 fade out
    if (g1l >= 128) { b1l--; analogWrite(b1, b1l); }
    // When green is half-part LED2, red LED2 fade out
    if (g2l >= 128) { r2l--; analogWrite(r2, r2l); }

    analogWrite(g1, g1l);   // LED1 green
    analogWrite(g2, g2l);   // LED2 green
    g2l++;
    g1l++;
    d;
  }

  // LED1 red fade in
  while (r1l < 255) {
    
    // Fade out blue LED1 end
    if (b1l > 0) { b1l--; analogWrite(b1, b1l); }
    // Fade out red LED1 end
    if (r2l > 0) { r2l--; analogWrite(r2, r2l); }

    // When red is half-part LED, green LED1 fade out
    if (r1l >= 128) { g1l--; analogWrite(g1, g1l); }
    if (b2l >= 128) { g2l--; analogWrite(g2, g2l); }

    analogWrite(r1, r1l);
    analogWrite(b2, b2l);
    b2l++;
    r1l++;
    d;
  }

  // We left green lights on 128 green brightness values 
  while (r1l >= 128) {
    analogWrite(r1, r1l);
    analogWrite(b2, b2l);
    analogWrite(g2, g2l);
    analogWrite(g1, g1l);
    r1l--;
    b2l--;
    g2l--;
    g1l--;
    d;
  }
}
