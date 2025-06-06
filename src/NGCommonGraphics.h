//
//  NGCommonGraphics.h
//  NGEngineCore
//
//  Created by Nils Grimmer on 05.03.23.
//

#ifndef NGCommonGraphics_h
#define NGCommonGraphics_h

#include <Arduino.h>

struct coord2DStruct
{
    int x;
    int y;
};
typedef struct coord2DStruct coord2D;

struct colorRGBStruct
{
    byte red;
    byte green;
    byte blue;
};
typedef struct colorRGBStruct colorRGB;

#define COLOR_TRANSPARENT   { .red = 255, .green = 1, .blue = 255 }
#define COLOR_BLACK         { .red = 0, .green = 0, .blue = 0 }
#define COLOR_BLUE          { .red = 0, .green = 0, .blue = 255 }
#define COLOR_BLUE_LOW      { .red = 0, .green = 0, .blue = 55 }
#define COLOR_BLUE_C64      { .red = 0xA5, .green = 0xA5, .blue = 0xFF }
#define COLOR_BLUE_C64_LOW  { .red = 0x42, .green = 0x42, .blue = 0xE7 }
#define COLOR_BROWN         { .red = 139, .green = 69, .blue = 8 }
#define COLOR_DARKGRAY      { .red = 42, .green = 42, .blue = 42 }
#define COLOR_GREEN         { .red = 0, .green = 255, .blue = 0 }
#define COLOR_GREEN_LOW     { .red = 0, .green = 55, .blue = 0 }
#define COLOR_LIGHTGRAY     { .red = 128, .green = 128, .blue = 128 }
#define COLOR_LIME          { .red = 191, .green = 255, .blue = 0 }
#define COLOR_ORANGE        { .red = 255, .green = 33, .blue = 0 }
#define COLOR_PURPLE        { .red = 255, .green = 0, .blue = 255 }
#define COLOR_PURPLE_LOW    { .red = 55, .green = 0, .blue = 55 }
#define COLOR_RED           { .red = 255, .green = 0, .blue = 0 }
#define COLOR_RED_LOW       { .red = 55, .green = 0, .blue = 0 }
#define COLOR_TEAL          { .red = 0, .green = 255, .blue = 255 }
#define COLOR_TEAL_LOW      { .red = 0, .green = 55, .blue = 55 }
#define COLOR_WHITE         { .red = 255, .green = 255, .blue = 255 }
#define COLOR_WHITE_LOW     { .red = 55, .green = 55, .blue = 55 }
#define COLOR_YELLOW        { .red = 255, .green = 255, .blue = 0 }
#define COLOR_YELLOW_LOW    { .red = 55, .green = 55, .blue = 0 }

int convertColorRGBToInt(colorRGB c);

colorRGB getRandomColor();

bool isSameColor(colorRGB colorOne, colorRGB colorTwo);

#endif /* NGCommonGraphics_hpp */
