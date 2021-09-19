#include <FastLED.h>

/*
  One-day Project Psuedocode 

  - Define the Led Strip and its Components (Colors, Indexes)
    - Describe the library and define the Strip
    - Explain as we go



  Step One, define the strip in code:

  const int ledcount = 60;
  CRGB ledstrip [ledcount];
  static int hue = 0;
  void setup(){
    FastLED.addLeds<NEOPIXEL, 6>(ledstrip, ledcount);
    SetUpLEDS();
  }
  

  Step Two, change the color:

  static int hue = 0; <--- Change this number (from earlier) to change the color
  
  void ChangeColor(){
    for (int i = 0; i < ledcount; i++){
      ledstrip[i] = CHSV(hue, 255, 255);
    }
    FastLED.show();
  }

  Step Three, do a rainbow and show them how:

  void RainbowPattern(){
    int tempHue = 0;
    int rainbowSpeed = 0;
    int rainbowCycle = 0;
    int hueDifference = 0; <-- Difference between two pixels' hues
    for(int i = 0; i < ledcount; i++){
      ledstrip[i] = CHSV (rainbowSpeed*tempHue+(rainbowCycle*hueDifference*i), 255, 255)
    }
    FastLED.show();
    tempHue++;
    delay(10);
  }



*/

// Our Setup Code

const int ledcount = 60;
CRGB leds[ledcount];
static int hue = 200;
void setup() {
  // put your setup code here, to run once:
  FastLED.addLeds<NEOPIXEL, 6>(leds, ledcount);
  SetUpLEDS();
  // ChangeColor();
}

void loop() {
  // put your main code here, to run repeatedly:
}

// Step One Function
void SetUpLEDS(){
  static uint8_t hue = 0;
  for (int i = 0; i < ledcount; i++) {
    leds[i]=CHSV(0, 0, 255);
  }
  FastLED.show();
}

// Step Two Function
  void ChangeColor(){
    for (int i = 0; i < ledcount; i++){
      leds[i] = CHSV(hue, 255, 255);
    }
    FastLED.show();
  }

// Step Three Function
  // void RainbowPattern(){
  //   int tempHue = 0;
  //   int rainbowSpeed = 0;
  //   int rainbowCycle = 0;
  //   int hueDifference = 0; //<-- Difference between two pixels' hues
  //   for(int i = 0; i < ledcount; i++){
  //     ledstrip[i] = CHSV (rainbowSpeed*tempHue+(rainbowCycle*hueDifference*i), 255, 255)
  //   }
  //   FastLED.show();
  //   tempHue++;
  //   delay(10);
  // }