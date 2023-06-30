#include <Keypad.h>
#include <FastLED.h>
#define NUM_LEDS 42
#define DATA_PIN 13
CRGB leds[NUM_LEDS];
const int righe = 4;
const int colonne = 4;
char keys[righe][colonne] = {
  { '1', '2', '3', 'A' },
  { '4', '5', '6', 'B' },
  { '7', '8', '9', '4' },
  { '*', '0', '#', 'D' },
};
byte colpin[colonne] = { 7, 6, 5, 4 };
byte rigpin[righe] = { 11, 10, 9, 8 };


Keypad keypad = Keypad(makeKeymap(keys), rigpin, colpin, righe, colonne);
const int ledPin = 13;    // Collega il pin del LED al pin digitale di Arduino

void setup() {
  pinMode(ledPin, OUTPUT);    // Imposta il pin del LED come output
  digitalWrite(ledPin, LOW);  // Spegni il LED all'avvio
   FastLED.addLeds<WS2811, DATA_PIN, GRB>(leds, NUM_LEDS);
}

void loop() {
char key = keypad.getKey();    // Leggi la pressione del tasto sul keypad
  
  if (key == '1') {
  leds[8] = CRGB::Green;
  leds[9] = CRGB::Green;
  leds[10] = CRGB::Green;
  leds[11] = CRGB::Green;
  leds[12] = CRGB::Green;
  leds[13] = CRGB::Green;
  leds[14] = CRGB::Green;
  leds[15] = CRGB::Green;
  leds[16] = CRGB::Green;
  leds[17] = CRGB::Green;
  leds[18] = CRGB::Green;
  leds[19] = CRGB::Green;
  leds[20] = CRGB::Green;
  leds[21] = CRGB::Green;
  leds[22] = CRGB::Green;
  leds[23] = CRGB::Green;
  leds[24] = CRGB::Green;
  leds[25] = CRGB::Green;
  leds[26] = CRGB::Green;
  leds[27] = CRGB::Green;
  leds[28] = CRGB::Green;
  leds[29] = CRGB::Green;
  leds[30] = CRGB::Green;
  leds[7] = CRGB::Green;
    FastLED.show();
  }
  if (key == '2') {
  leds[13] = CRGB::Green;
  leds[14] = CRGB::Green;
  leds[15] = CRGB::Green;
  leds[16] = CRGB::Green;
  leds[17] = CRGB::Green;
  leds[18] = CRGB::Green;
  leds[19] = CRGB::Green;
  leds[20] = CRGB::Green;
  leds[21] = CRGB::Green;
  leds[22] = CRGB::Green;
  leds[23] = CRGB::Green;
  leds[24] = CRGB::Green;
  leds[25] = CRGB::Green;
  leds[26] = CRGB::Green;
  leds[1] = CRGB::Green;
  leds[2] = CRGB::Green;
  leds[3] = CRGB::Green;
  leds[4] = CRGB::Green;
  leds[5] = CRGB::Green;
  leds[6] = CRGB::Green;
  leds[42] = CRGB::Green;
  leds[41] = CRGB::Green;
  leds[40] = CRGB::Green;
  leds[31] = CRGB::Green;
  leds[32] = CRGB::Green;
  leds[33] = CRGB::Green;
  leds[34] = CRGB::Green;
  leds[35] = CRGB::Green;
  leds[36] = CRGB::Green;
  leds[37] = CRGB::Green;
  leds[38] = CRGB::Green;
  leds[39] = CRGB::Green;
  FastLED.show(); 
  }
if (key == '3') {
  leds[13] = CRGB::Green;
  leds[14] = CRGB::Green;
  leds[15] = CRGB::Green;
  leds[16] = CRGB::Green;
  leds[17] = CRGB::Green;
  leds[18] = CRGB::Green;
  leds[19] = CRGB::Green;
  leds[20] = CRGB::Green;
  leds[21] = CRGB::Green;
  leds[22] = CRGB::Green;
  leds[23] = CRGB::Green;
  leds[24] = CRGB::Green;
  leds[25] = CRGB::Green;
  leds[26] = CRGB::Green;
  leds[1] = CRGB::Green;
  leds[2] = CRGB::Green;
  leds[3] = CRGB::Green;
  leds[4] = CRGB::Green;
  leds[5] = CRGB::Green;
  leds[6] = CRGB::Green;
  leds[27] = CRGB::Green;
  leds[28] = CRGB::Green;
  leds[29] = CRGB::Green;
  leds[30] = CRGB::Green;
  leds[31] = CRGB::Green;
  leds[32] = CRGB::Green;
  leds[33] = CRGB::Green;
  leds[34] = CRGB::Green;
  leds[35] = CRGB::Green;
  leds[36] = CRGB::Green;
    FastLED.show();
  }
  if (key == '4') {
  leds[8] = CRGB::Green;
  leds[9] = CRGB::Green;
  leds[10] = CRGB::Green;
  leds[11] = CRGB::Green;
  leds[12] = CRGB::Green;
  leds[7] = CRGB::Green;
  leds[6] = CRGB::Green;
  leds[5] = CRGB::Green;
  leds[4] = CRGB::Green;
  leds[3] = CRGB::Green;
  leds[2] = CRGB::Green;
  leds[1] = CRGB::Green;
  leds[21] = CRGB::Green;
  leds[22] = CRGB::Green;
  leds[23] = CRGB::Green;
  leds[24] = CRGB::Green;
  leds[25] = CRGB::Green;
  leds[26] = CRGB::Green;
  leds[27] = CRGB::Green;
  leds[28] = CRGB::Green;
  leds[29] = CRGB::Green;
  leds[30] = CRGB::Green;
  leds[20] = CRGB::Green;
  leds[19] = CRGB::Green;
  FastLED.show(); 
  }
  if (key == '5') {
 leds[6] = CRGB::Green;
  leds[5] = CRGB::Green;
  leds[4] = CRGB::Green;
  leds[3] = CRGB::Green;
  leds[2] = CRGB::Green;
  leds[1] = CRGB::Green;
  leds[27] = CRGB::Green;
  leds[28] = CRGB::Green;
  leds[29] = CRGB::Green;
  leds[30] = CRGB::Green;
  leds[25] = CRGB::Green;
  leds[26] = CRGB::Green;
  leds[7] = CRGB::Green;
  leds[8] = CRGB::Green;
  leds[9] = CRGB::Green;
  leds[10] = CRGB::Green;
  leds[11] = CRGB::Green;
  leds[12] = CRGB::Green;
  leds[13] = CRGB::Green;
  leds[14] = CRGB::Green;
  leds[15] = CRGB::Green;
  leds[16] = CRGB::Green;
  leds[17] = CRGB::Green;
  leds[18] = CRGB::Green;
    FastLED.show();
  }
  if (key == '6') {
 leds[7] = CRGB::Green;
  leds[6] = CRGB::Green;
  leds[5] = CRGB::Green;
  leds[4] = CRGB::Green;
  leds[3] = CRGB::Green;
  leds[2] = CRGB::Green;
  leds[1] = CRGB::Green;
  leds[27] = CRGB::Green;
  leds[28] = CRGB::Green;
  leds[29] = CRGB::Green;
  leds[30] = CRGB::Green;
  leds[31] = CRGB::Green;
  leds[32] = CRGB::Green;
  leds[8] = CRGB::Green;
  leds[9] = CRGB::Green;
  leds[10] = CRGB::Green;
  leds[11] = CRGB::Green;
  leds[12] = CRGB::Green;
  leds[13] = CRGB::Green;
  leds[14] = CRGB::Green;
  leds[15] = CRGB::Green;
  leds[16] = CRGB::Green;
  leds[17] = CRGB::Green;
  leds[18] = CRGB::Green;
  leds[40] = CRGB::Green;
  leds[41] = CRGB::Green;
  leds[42] = CRGB::Green;
  FastLED.show(); 
  }
  if (key == '7') {
  leds[6] = CRGB::Green;
  leds[5] = CRGB::Green;
  leds[41] = CRGB::Green;
  leds[3] = CRGB::Green;
  leds[2] = CRGB::Green;
  leds[1] = CRGB::Green;
  leds[15] = CRGB::Green;
  leds[16] = CRGB::Green;
  leds[17] = CRGB::Green;
  leds[18] = CRGB::Green;
  leds[19] = CRGB::Green;
  leds[20] = CRGB::Green;
  leds[21] = CRGB::Green;
  leds[22] = CRGB::Green;
  leds[23] = CRGB::Green;
  leds[24] = CRGB::Green;
  leds[25] = CRGB::Green;
  leds[26] = CRGB::Green;
  leds[27] = CRGB::Green;
  leds[28] = CRGB::Green;
  leds[29] = CRGB::Green;
  leds[30] = CRGB::Green;
    FastLED.show();
  }
  if (key == '8') {
  leds[7] = CRGB::Green;
  leds[6] = CRGB::Green;
  leds[5] = CRGB::Green;
  leds[4] = CRGB::Green;
  leds[3] = CRGB::Green;
  leds[2] = CRGB::Green;
  leds[1] = CRGB::Green;
  leds[27] = CRGB::Green;
  leds[28] = CRGB::Green;
  leds[29] = CRGB::Green;
  leds[30] = CRGB::Green;
  leds[31] = CRGB::Green;
  leds[32] = CRGB::Green;
  leds[8] = CRGB::Green;
  leds[9] = CRGB::Green;
  leds[10] = CRGB::Green;
  leds[11] = CRGB::Green;
  leds[12] = CRGB::Green;
  leds[13] = CRGB::Green;
  leds[14] = CRGB::Green;
  leds[15] = CRGB::Green;
  leds[16] = CRGB::Green;
  leds[17] = CRGB::Green;
  leds[18] = CRGB::Green;
  leds[19] = CRGB::Green;
  leds[20] = CRGB::Green;
  leds[40] = CRGB::Green;
  leds[41] = CRGB::Green;
  leds[42] = CRGB::Green;
  leds[21] = CRGB::Green;
  leds[22] = CRGB::Green;
  leds[23] = CRGB::Green;
  leds[24] = CRGB::Green;
  leds[25] = CRGB::Green;
  leds[26] = CRGB::Green;
  FastLED.show(); 
  }
  if (key == '9') {
  leds[8] = CRGB::Green;
  leds[9] = CRGB::Green;
  leds[10] = CRGB::Green;
  leds[11] = CRGB::Green;
  leds[12] = CRGB::Green;
  leds[13] = CRGB::Green;
  leds[14] = CRGB::Green;
  leds[15] = CRGB::Green;
  leds[16] = CRGB::Green;
  leds[17] = CRGB::Green;
  leds[18] = CRGB::Green;
  leds[19] = CRGB::Green;
  leds[20] = CRGB::Green;
  leds[21] = CRGB::Green;
  leds[22] = CRGB::Green;
  leds[23] = CRGB::Green;
  leds[24] = CRGB::Green;
  leds[25] = CRGB::Green;
  leds[26] = CRGB::Green;
  leds[27] = CRGB::Green;
  leds[28] = CRGB::Green;
  leds[29] = CRGB::Green;
  leds[30] = CRGB::Green;
  leds[31] = CRGB::Green;
  leds[32] = CRGB::Green;
  leds[7] = CRGB::Green;
  leds[6] = CRGB::Green;
  leds[5] = CRGB::Green;
  leds[4] = CRGB::Green;
  leds[3] = CRGB::Green;
  leds[2] = CRGB::Green;
  leds[1] = CRGB::Green;
    FastLED.show();
  }
  if (key == '0') {
  leds[27] = CRGB::Green;
  leds[28] = CRGB::Green;
  leds[29] = CRGB::Green;
  leds[30] = CRGB::Green;
  leds[31] = CRGB::Green;
  leds[32] = CRGB::Green;
  leds[8] = CRGB::Green;
  leds[9] = CRGB::Green;
  leds[10] = CRGB::Green;
  leds[11] = CRGB::Green;
  leds[12] = CRGB::Green;
  leds[13] = CRGB::Green;
  leds[14] = CRGB::Green;
  leds[15] = CRGB::Green;
  leds[16] = CRGB::Green;
  leds[17] = CRGB::Green;
  leds[18] = CRGB::Green;
  leds[19] = CRGB::Green;
  leds[20] = CRGB::Green;
  leds[40] = CRGB::Green;
  leds[41] = CRGB::Green;
  leds[42] = CRGB::Green;
  leds[21] = CRGB::Green;
  leds[22] = CRGB::Green;
  leds[23] = CRGB::Green;
  leds[24] = CRGB::Green;
  leds[25] = CRGB::Green;
  leds[26] = CRGB::Green;
  FastLED.show(); 
  }
}