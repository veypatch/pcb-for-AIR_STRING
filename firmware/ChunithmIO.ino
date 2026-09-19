#include <FastLED.h>
#include <Keyboard.h>
#define LEFT_PIN 19
#define RIGHT_PIN 18
#define NUM_LEDS 3
#define OUT1 4
#define OUT2 5
#define OUT3 6
#define OUT4 7
#define OUT5 8
#define OUT6 9

CRGB left_leds[NUM_LEDS];
CRGB right_leds[NUM_LEDS];

void setup() {
  Keyboard.begin();
  FastLED.addLeds<WS2811, LEFT_PIN, RGB>(left_leds, NUM_LEDS)
      .setCorrection(TypicalLEDStrip);
  FastLED.addLeds<WS2811, RIGHT_PIN, RGB>(right_leds, NUM_LEDS)
      .setCorrection(TypicalLEDStrip);
  FastLED.setBrightness(64);
  delay(1000);
  fill_solid(left_leds, NUM_LEDS, CRGB(0x7F, 0, 0x23));
  fill_solid(right_leds, NUM_LEDS, CRGB(0x7F, 0, 0x23));
  FastLED.show();
  pinMode(OUT1, INPUT_PULLUP);
  pinMode(OUT2, INPUT_PULLUP);
  pinMode(OUT3, INPUT_PULLUP);
  pinMode(OUT4, INPUT_PULLUP);
  pinMode(OUT5, INPUT_PULLUP);
  pinMode(OUT6, INPUT_PULLUP);
  delay(1000);
}

void loop() {
  if (digitalRead(OUT1) == HIGH) {
    Keyboard.press('a');
  } else {
    Keyboard.release('a');
  }
  if (digitalRead(OUT4) == HIGH) {
    Keyboard.press('b');
  } else {
    Keyboard.release('b');
  }
  if (digitalRead(OUT2) == HIGH) {
    Keyboard.press('c');
  } else {
    Keyboard.release('c');
  }
  if (digitalRead(OUT5) == HIGH) {
    Keyboard.press('d');
  } else {
    Keyboard.release('d');
  }
  if (digitalRead(OUT3) == HIGH) {
    Keyboard.press('e');
  } else {
    Keyboard.release('e');
  }
  if (digitalRead(OUT6) == HIGH) {
    Keyboard.press('f');
  } else {
    Keyboard.release('f');
  }
}
