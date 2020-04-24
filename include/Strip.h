#pragma once

#include <Adafruit_NeoPixel.h>
#include <ColorHelper.h>

void setColor(LEDStrip_t strip, Adafruit_NeoPixel pixel);
void setColor(byte color, Adafruit_NeoPixel pixel);
void fillStrip(uint32_t color, uint16_t pos);