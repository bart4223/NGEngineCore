//
//  NGCustomFont.h
//  NGEngineCore
//
//  Created by Nils Grimmer on 19.04.24.
//

#ifndef NGCustomFont_h
#define NGCustomFont_h

#if (ARDUINO >= 100)
#include <Arduino.h>
#else
#include <WProgram.h>
#endif

class NGCustomFont {
    
public:
    virtual byte getCharLineValue(char c, byte line);
};

#endif /* NGCustomFont_h */
