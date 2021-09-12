#include "FastLED.h"
CRGB leds[60];
void setup() { FastLED.addLeds<NEOPIXEL, 6>(leds, 60); }
void loop() { 
  static uint8_t hue = 0;
  for (int i = 0; i < 36; i++) {
    leds[i]=CHSV(4*hue+(2*7*i), 255, 255);
  }
  FastLED.show();
  hue++;
  delay(10);
}
