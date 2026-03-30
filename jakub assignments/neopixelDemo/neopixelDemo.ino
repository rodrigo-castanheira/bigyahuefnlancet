#include <Adafruit_NeoPixel.h>

const int neopixelsPin = 4;
const int totalPixels = 4;

Adafruit_NeoPixel pixels(totalPixels, neopixelsPin, NEO_GRB + NEO_KHZ800);

void setup() {
  pixels.begin();
  pixels.clear();
  pixels.show();
}

void loop() {
  for (int i = 0; i < 150; i++){
    pixels.setPixelColor(0, pixels.Color(i, 150 - i, 0));
    pixels.setPixelColor(1, pixels.Color(i, 150 - i, 0));
    pixels.setPixelColor(2, pixels.Color(i, 150 - i, 0));
    pixels.setPixelColor(3, pixels.Color(i, 150 - i, 0));
    pixels.show();
    delay(10);
  }

  for (int i = 0; i < 150; i++){
    pixels.setPixelColor(0, pixels.Color(150 - i, 0, i));
    pixels.setPixelColor(1, pixels.Color(150 - i, 0, i));
    pixels.setPixelColor(2, pixels.Color(150 - i, 0, i));
    pixels.setPixelColor(3, pixels.Color(150 - i, 0, i));
    pixels.show();
    delay(10);
  }

  for (int i = 0; i < 150; i++){
    pixels.setPixelColor(0, pixels.Color(0, i, 150 - i));
    pixels.setPixelColor(1, pixels.Color(0, i, 150 - i));
    pixels.setPixelColor(2, pixels.Color(0, i, 150 - i));
    pixels.setPixelColor(3, pixels.Color(0, i, 150 - i));
    pixels.show();
    delay(10); 
  }
}
