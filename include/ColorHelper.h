#pragma once

#include <stdio.h>
#include <stdint.h>
#include <Arduino.h>

#pragma pack(1)
typedef struct 
{
    uint16_t pos;
    uint8_t red;
    uint8_t green;
    uint8_t blue;
    uint8_t brightness;
} LEDStrip_t;

LEDStrip_t fromBytes(uint8_t *command);