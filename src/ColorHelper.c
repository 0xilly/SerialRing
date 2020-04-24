#include <ColorHelper.h>

LEDStrip_t fromBytes(uint8_t *command)
{
    LEDStrip_t* stripBuffer = (LEDStrip_t*)command;
    LEDStrip_t strip;
    strip.pos = stripBuffer->pos;
    strip.red = stripBuffer->red;
    strip.green = stripBuffer->green;
    strip.blue = stripBuffer->blue;
    strip.brightness = stripBuffer->brightness;

    return strip;
}