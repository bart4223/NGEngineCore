//
//  NGZX81Font.h
//  NGEngineCore
//
//  Created by Nils Grimmer on 21.04.24.
//

#ifndef NGZX81Font_h
#define NGZX81Font_h

#include <Arduino.h>
#include <Fonts/NGCustomFont.h>

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
    
    byte _getLetterA(byte line);
    
    byte _getLetterC(byte line);
    
    byte _getLetterD(byte line);
    
    byte _getLetterE(byte line);
    
    byte _getLetterL(byte line);
    
    byte _getLetterR(byte line);
    
    byte _getLetterS(byte line);
    
    byte _getLetterX(byte line);
    
    byte _getLetterZ(byte line);

    byte _getLetterUnknown(byte line);

public:
    NGZX81Font();
    
    byte getCharLineValue(char c, byte line);
};

#endif /* NGZX81Font_h */
