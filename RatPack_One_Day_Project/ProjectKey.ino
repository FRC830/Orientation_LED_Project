#include <FastLED.h>

/*
  One-day Project Psuedocode 

  - Define the Led Strip and its Components (Colors, Indexes)
    - Describe the library and define the Strip
    - Explain as we go



  Step One, define the strip in code:

  Variables:

  Type VariableName = VariableValue;

  The semicolon let's the program know it has reached the end of a command

  The first thing we need to do is define each of these variables. Some of them look
  a little different, but their purpose is still the same. For example, here's our "setup" code:

  const int ledcount = 60;
  CRGB ledstrip [ledcount];
  static int hue = 0;
  void setup(){
    FastLED.addLeds<NEOPIXEL, 6>(ledstrip, ledcount);
    SetUpLEDS();
  }
  

  Step Two, change the color:

  *Explain functions here*

  static int hue = 0; <--- Change this number (from earlier) to change the color
  
  void ChangeColor(){
    for (int i = 0; i < ledcount; i++){
      ledstrip[i] = CHSV(hue, 255, 255);
    }
    FastLED.show();
  }

  Step Three, do a rainbow and show them how:

  *Explain loops here*

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

  Step Four, try something new!:

  With the techniques that we taught, can else can you create on the LED strip?
  Possible Ideas:
  - Can you make it show two solid colors at once?
  - Can you make it flash between colors rather than cycle?
  - Can you modify the rainbow to show a smaller gradient instead?



*/

// Our Setup Code

const int ledcount = 60;
CRGB leds[ledcount];
static int hue = 200;
void setup() {
  // put your setup code here, to run once:
  FastLED.addLeds<NEOPIXEL, 6>(leds, ledcount);
  // SetUpLEDS();
  // ChangeColor();
}

void loop() {
  // put your main code here, to run repeatedly:
}

// Step One Function
// (Changed the number of leds to 5 due to voltage drop and loss of COM Port detection)
void SetUpLEDS(){
  static uint8_t hue = 0;
  for (int i = 0; i < 5; i++) {
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

// Step Four (Example) Fuction
  // void DottedPattern(){
  //   int firstHue = 148;
  //   int secondHue = 200;
  //   while(true){
  //     for (int i = 0; i < ledcount; i++){
  //       leds[i] = ((i % 2) == 0) ? CHSV(firstHue,255,255) : CHSV(secondHue,255,255);
  //     }
  //     FastLED.show();
  //     delay(1000);
  //     for (int i = 0; i < ledcount; i++){
  //       leds[i] = ((i % 2) == 0) ? CHSV(secondHue,255,255) : CHSV(firstHue,255,255);
  //     }
  //     FastLED.show();
  //     delay(1000);
  //   }
  // }