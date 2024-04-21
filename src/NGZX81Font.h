//
//  NGZX81Font.h
//  NGEngineCore
//
//  Created by Nils Grimmer on 21.04.24.
//

#ifndef NGZX81Font_h
#define NGZX81Font_h

#if (ARDUINO >= 100)
#include <Arduino.h>
#else
#include <WProgram.h>
#endif

#include "NGCustomFont.h"

class NGZX81Font : public NGCustomFont {
    
protected:
    void _create();
    
    byte _getNumeralZero(byte line);
    
    byte _getNumeralOne(byte line);
    
    byte _getNumeralTwo(byte line);
    
    byte _getNumeralThree(byte line);

    byte _getNumeralFour(byte line);

    byte _getNumeralFive(byte line);
    
    byte _getNumeralSix(byte line);
    
    byte _getNumeralSeven(byte line);
    
    byte _getNumeralEight(byte line);
    
    byte _getNumeralNine(byte line);

public:
    NGZX81Font();
    
    byte getCharLineValue(char c, byte line);
};

#endif /* NGZX81Font_h */
