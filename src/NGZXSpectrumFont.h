//
//  NGZXSpectrumFont.h
//  NGEngineCore
//
//  Created by Nils Grimmer on 24.04.24.
//

#ifndef NGZXSpectrumFont_h
#define NGZXSpectrumFont_h

#if (ARDUINO >= 100)
#include <Arduino.h>
#else
#include <WProgram.h>
#endif

#include "NGCustomFont.h"

class NGZXSpectrumFont : public NGCustomFont {
    
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
    
    byte _getLetterA(byte line);
    
    byte _getLetterL(byte line);
    
    byte _getLetterR(byte line);
    
    byte _getLetterS(byte line);
    
    byte _getLetterX(byte line);
    
    byte _getLetterZ(byte line);
    
    byte _getLetterCopyright(byte line);

    byte _getLetterUnknown(byte line);

public:
    NGZXSpectrumFont();
    
    byte getCharLineValue(char c, byte line);
};

#endif /* NGZXSpectrumFont_h */
