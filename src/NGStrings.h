//
//  NGStrings.h
//  NGEngineCore
//
//  Created by Nils Grimmer on 27.12.21.
//

#ifndef NGStrings_h
#define NGStrings_h

#include <Arduino.h>

unsigned char* FloatToChar(float value);

unsigned char* LeftPadInteger(int value, int digits);

int getSize(char * s);

#endif /* NGStrings_h */
