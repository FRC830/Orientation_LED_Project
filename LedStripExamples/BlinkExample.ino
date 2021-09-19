// #include "FastLED.h"
// #define NUM_LEDS 60
// CRGB leds[NUM_LEDS];
// void setup() { FastLED.addLeds<NEOPIXEL, 6>(leds, NUM_LEDS); }
// void loop() {
//     for (int i = 0; i < 36; i++){
// 	    leds[i] = CHSV(i,255,255); 
//         FastLED.show(); 
//         delay(30);
//     }
//     for (int i = 0; i < 36; i++){
//     	leds[i] = CHSV(i*5,255,255); 
//         FastLED.show(); 
//         delay(30);
//     }
// }



#include "FastLED.h"
const int ledcount = 40;
CRGB leds[ledcount];
void setup() { FastLED.addLeds<NEOPIXEL, 6>(leds, ledcount); }
void loop() { 
  static uint8_t hue = 0;
  for (int i = 0; i < ledcount; i++) {
    leds[i]=CHSV(4*hue+(2*7*i), 255, 255);
  }
  FastLED.show();
  hue++;
  delay(10);
}
