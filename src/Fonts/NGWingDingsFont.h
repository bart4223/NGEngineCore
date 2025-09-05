//
//  NGWingDingsFont.h
//  NGEngineCore
//
//  Created by Nils Grimmer on 30.08.25.
//

#ifndef NGWingDingsFont_h
#define NGWingDingsFont_h

#include <Arduino.h>
#include <Fonts/NGCustomFont.h>

class NGWingDingsFont : public NGCustomFont {
    
protected:
    void _create();
    
    byte _getSymbolBlock(byte line);

    byte _getSymbolCopyright(byte line);

    byte _getSymbolHeart(byte line);

    byte _getSymbolHouseBig(byte line);

    byte _getSymbolHouseTiny(byte line);

    byte _getSymbolSmiley(byte line);

    byte _getSymbolSmileySad(byte line);

    byte _getSymbolTreeThick(byte line);

    byte _getSymbolTreeThin(byte line);

    byte _getSymbolUnknown(byte line);

public:
    NGWingDingsFont();
    
    byte getCharLineValue(char c, byte line);
};

#endif /* NGWingDingsFont_h */