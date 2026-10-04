// ----- Problem 1 -----
void turnLedOn(CRGB color, int index) {
  leds[index] = color;
  FastLED.show();   // <-- Very important and easy to forget!!!
}

void turnLedOff(CRGB color, int index) {
  /* COMPLETE ME */
  leds[index] = CRGB::Black;   // black means no light, so this LED turns "off", so the index being the led , 
  FastLED.show();              // send the change to the strip
}

// ----- Problem 2 -----
void turnAllLedsOff(int index) {
  for (int i = 0; i < NUM_LEDS; i++){
    // What should we put here to turn the led at index "i" off? 
  turnLedOff(CRGB::Black, i); //turns hte led to black, (off), whichever led is at i, it iterates through
  FastLED.show();
  }
}

void turnAllLedsOn(CRGB color, int index) {
  /* COMPLETE ME */
  for (int i = 0; i < NUM_LEDS; i++) {
  turnLedOn(color, i);
  }
}

// ----- Problem 3 -----
void bouncePixel(CRGB color, int waitTime) {
  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = color;                          // sest led 
    FastLED.show();                           // shows the led on the strip
    delay(1000);                              // wait a second
    leds[i] = CRGB::Black;                    // sets led back to black, turns it off
  }

  for (int i = NUM_LEDS - 1; i >= 0; i--) {   // end back to start
    leds[i] = color;                          // set led to the given color
    FastLED.show();                           // display the color onto the strip
    delay(1000);                              // delays for 1000ms
    leds[i] = CRGB::Black;                    // turn led off
  }
  FastLED.show();                             // show the final black so the last LED turns off
}
    // set led to the given color 
    // display the color onto the strip
    // wait the given amount of time
    // set led back to the color black

  /* FINISH ME */

void NewFunctionNizarAli() {
  for (int i = 0; i < NUM_LEDS; i++) {          // go from the first LED to the last
    leds[i] = CHSV(i * 25, 255, 255);           // give this LED a rainbow color based on its position and leave it on
    FastLED.show();                             // send the color to the strip from the arduino
    delay(1000);                                // wait a second so you can see each LED light up
  }                                             // end of the forward loop
  for (int i = NUM_LEDS - 1; i >= 0; i--) {     // go from the last LED back to the first, so opppsite or first kinda
    leds[i] = CRGB::Black;                      // turn the led black "off"
    FastLED.show();                             // send the change to the strip, so yo ucan see it
    delay(1000);                                // wait a second again
  }                                             // end of the backward loop
}
