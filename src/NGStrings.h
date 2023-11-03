//
//  NGStrings.h
//  NGEngineCore
//
//  Created by Nils Grimmer on 27.12.21.
//

#ifndef NGStrings_h
#define NGStrings_h

#if (ARDUINO >= 100)
#include <Arduino.h>
#else
#include <WProgram.h>
#endif

unsigned char* FloatToChar(float value);

unsigned char* LeftPadInteger(int value, int digits);

#endif /* NGStrings_h */
