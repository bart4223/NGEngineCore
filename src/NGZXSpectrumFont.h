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
    
    byte _getLetterC(byte line);
    
    byte _getLetterL(byte line);
    
    byte _getLetterR(byte line);
    
    byte _getLetterS(byte line);
    
    byte _getLetterX(byte line);
    
    byte _getLetterZ(byte line);
    
    byte _getLowerLetterA(byte line);
    
    byte _getLowerLetterC(byte line);
    
    byte _getLowerLetterD(byte line);
    
    byte _getLowerLetterE(byte line);
    
    byte _getLowerLetterH(byte line);
    
    byte _getLowerLetterI(byte line);
    
    byte _getLowerLetterL(byte line);
    
    byte _getLowerLetterN(byte line);
    
    byte _getLowerLetterR(byte line);
    
    byte _getLowerLetterS(byte line);
    
    byte _getLowerLetterT(byte line);
    
    byte _getLetterCopyright(byte line);

    byte _getLetterUnknown(byte line);

public:
    NGZXSpectrumFont();
    
    byte getCharLineValue(char c, byte line);
};

#endif /* NGZXSpectrumFont_h */
