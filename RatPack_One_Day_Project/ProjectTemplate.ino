#include <FastLED.h>

/*
  Today, you'll be programming an LED Strip.

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

  For this first exercise, type everything above near the non-commented `void setup(){}`
  space below as how you see it. Afterwards, hit the Upload button in the top right of VS Code.
  

  Step Two, change the color:

  A function is a group of statements that perform a 
  particular task. In C++, they are created with the following notation:

  ReturnType FunctionName(){
    
    //  Various Code Here
    
  }
  
  *For now, everytime you create a function, replace the `ReturnType` with `void`



  When you want to use a function, you must "call" it in the code:

  void setup(){

    FunctionName(); <---- This calls the function
  }
  
  For this next exercise, change the value of `hue` and uncomment the `ChangeColor` function below

  static int hue = 0; <--- Change this number (from earlier) to change the color
  
  void ChangeColor(){
    for (int i = 0; i < ledcount; i++){
      ledstrip[i] = CHSV(hue, 255, 255);
    }
    FastLED.show();
  }

  Step Three, do a rainbow:

  A `loop` is a tool used to repeatedly execute statements until a condition
  is reached or satisfied. You may have saw in the `ChangeColor` function that
  there is a `for loop`. What this means is that a set of code is repeated *for* a 
  certain amount of times. Here is the structure of a for loop:

  for (int IteratorValue = 0; IteratorValue < 10; IteratorValue++){
    // Do some code
  }

  The first part of the loop is the `initial` value: what we start at when repeating.
  The second part is the `condition` that is evaluated. If is true, the loop executes the body of itself.
  The last part is the increment. This increases the initial value by any number (usually one) to update
  the `iteration` of the loop. In C++, any variable that has a `++` at the end means the original variable
  becomes equal to itself `plus one`.

  Because the LED strip has an "index" for each LED, we need to use a "for loop" to
  change the value of each LED at every index.
  For this exercise:
    - Create a function called `RainbowPattern()`
    - Make a `static uin8_t` variable called tempHue and set it equal to 0
    - Make three `int` variables called rainbowSpeed, rainbowCycle and hueDifference. Set them equal to 4, 2 and 7, respectively.
    - Make a for loop whose condition terminates above the value of `ledcount` and who starts at 0 and increments by 1
    - Arrange the variables in the function into the following in the for loop body:
      
      ledstrip[i] = CHSV(yourSpeed*yourTempHue+(yourRainbowCycle*yourHueDifference*i),255,255);

    - Type in `FastLED.show()`, `tempHue++` and `delay(10)` at the very bottom. Don't forget the semicolons!
    - Lastly, call the function in the `loop` function underneath the `setup` function

  Step Four, try something new!:

  With the techniques that we taught, what else can you create on the LED strip?
  Possible Ideas:
  - Can you make it show two solid colors at once?
  - Can you make it flash between colors rather than cycle?
  - Can you modify the rainbow to show a smaller gradient instead?
  Write a function to do one of these actions or something similar
*/

// Our Setup Code

void setup() {

}

void loop() {

}

// Step One Function
// (Changed the number of leds to 5 due to voltage drop and loss of COM Port detection)
// void SetUpLEDS(){
//   static uint8_t hue = 0;
//   for (int i = 0; i < 5; i++) {
//     leds[i]=CHSV(0, 0, 255);
//   }
//   FastLED.show();
// }

// Step Two Function
  // void ChangeColor(){
  //   for (int i = 0; i < ledcount; i++){
  //     leds[i] = CHSV(hue, 255, 255);
  //   }
  //   FastLED.show();
  // }

// Write Step Three Function Here

// Step Four (Example) Fuction
  // void DottedPattern(){
  //   int firstHue = 128;
  //   int secondHue = 200;
  //     for (int i = 0; i < ledcount; i++){
  //       leds[i] = ((i % 3) == 0) ? CHSV(firstHue,255,255) : CHSV(secondHue,255,255);
  //     }
  //     FastLED.show();
  //     delay(1000);
  //     for (int i = 0; i < ledcount; i++){
  //       leds[i] = ((i % 3) == 0) ? CHSV(secondHue,255,255) : CHSV(firstHue,255,255);
  //     }
  //     FastLED.show();
  //     delay(1000);
  // }