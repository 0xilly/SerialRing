#include <Strip2.h>
#include <Arduino.h>

Adafruit_NeoPixel pixel = Adafruit_NeoPixel(24, 2, NEO_GRB);

uint16_t i;
uint8_t r;
uint8_t g;
uint8_t b;
uint8_t brt;

LEDStrip_t strip;
void setup()
{
  pixel.begin();
  pixel.show();
  strip.pos = 2;
  strip.red = 3;
  strip.green = 99;
  strip.blue = 200;
  strip.brightness = 1;
}

void loop() {
  setColor(strip, pixel);
  delay(10);
}

