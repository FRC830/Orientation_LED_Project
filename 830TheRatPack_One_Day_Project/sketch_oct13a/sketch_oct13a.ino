        #include "FastLED.h"

        CRGB leds[1];
        void setup() { FastLED.addLeds<NEOPIXEL, 7>(leds, 1); }
        void loop() { 
                leds[0] = CRGB::White; FastLED.show(); delay(10); 
                leds[0] = CRGB::Red; FastLED.show(); delay(10);
        }
