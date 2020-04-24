#include <Strip2.h>

void setColor(LEDStrip_t strip, Adafruit_NeoPixel neo)
{
    neo.setBrightness(strip.brightness);
    neo.setPixelColor(strip.pos, strip.red, strip.green, strip.blue);
    neo.show();
}

void setColor(byte bytes[], Adafruit_NeoPixel neo)
{
    LEDStrip_t strip = fromBytes(bytes);
    neo.setBrightness(strip.brightness);
    neo.setPixelColor(strip.pos, strip.red, strip.green, strip.blue);
    neo.show();
}