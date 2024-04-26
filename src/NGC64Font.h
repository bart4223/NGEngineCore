//
//  NGC64Font.h
//  NGEngineCore
//
//  Created by Nils Grimmer on 26.04.24.
//

#ifndef NGC64Font_h
#define NGC64Font_h

#if (ARDUINO >= 100)
#include <Arduino.h>
#else
#include <WProgram.h>
#endif

#include "NGCustomFont.h"

class NGC64Font : public NGCustomFont {
    
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
    
    byte _getLetterC(byte line);
    
    byte _getLetterD(byte line);
    
    byte _getLetterE(byte line);
    
    byte _getLetterM(byte line);
    
    byte _getLetterO(byte line);
    
    byte _getLetterR(byte line);
    
    byte _getLetterUnknown(byte line);

public:
    NGC64Font();
    
    byte getCharLineValue(char c, byte line);
};

#endif /* NGC64Font_h */
