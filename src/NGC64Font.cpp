//
//  NGC64Font.cpp
//  NGEngineCore
//
//  Created by Nils Grimmer on 26.04.24.
//

#include "NGC64Font.h"

NGC64Font::NGC64Font() {
    _create();
}

void NGC64Font::_create() {
    
}

byte NGC64Font::_getNumeralZero(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x00:
        case 0x06:
            res = 0x3C;
            break;
        case 0x01:
        case 0x04:
        case 0x05:
            res = 0x66;
            break;
        case 0x02:
            res = 0x6E;
            break;
        case 0x03:
            res = 0x76;
            break;
    }
    return res;
}

byte NGC64Font::_getNumeralOne(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x00:
        case 0x01:
        case 0x03:
        case 0x04:
        case 0x05:
            res = 0x18;
            break;
        case 0x02:
            res = 0x38;
            break;
        case 0x06:
            res = 0x7E;
            break;
    }
    return res;
}

byte NGC64Font::_getNumeralTwo(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x00:
            res = 0x3C;
            break;
       case 0x01:
            res = 0x66;
            break;
        case 0x02:
            res = 0x06;
            break;
        case 0x03:
            res = 0x0C;
            break;
        case 0x04:
            res = 0x30;
            break;
        case 0x05:
            res = 0x60;
            break;
        case 0x06:
            res = 0x7E;
            break;
    }
    return res;
}

byte NGC64Font::_getNumeralThree(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x00:
        case 0x06:
            res = 0x3C;
            break;
        case 0x01:
        case 0x05:
            res = 0x66;
            break;
        case 0x02:
        case 0x04:
            res = 0x06;
            break;
        case 0x03:
            res = 0x1C;
            break;
    }
    return res;
}

byte NGC64Font::_getNumeralFour(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x00:
        case 0x05:
        case 0x06:
            res = 0x06;
            break;
        case 0x01:
            res = 0x0E;
            break;
        case 0x02:
            res = 0x1E;
            break;
        case 0x03:
            res = 0x66;
            break;
        case 0x04:
            res = 0x7F;
            break;
    }
    return res;
}

byte NGC64Font::_getNumeralFive(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x00:
            res = 0x7E;
            break;
        case 0x01:
            res = 0x60;
            break;
        case 0x02:
            res = 0x7C;
            break;
        case 0x03:
        case 0x04:
            res = 0x06;
            break;
        case 0x05:
            res = 0x66;
            break;
        case 0x06:
            res = 0x3C;
            break;
    }
    return res;
}

byte NGC64Font::_getNumeralSix(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x00:
        case 0x06:
            res = 0x3C;
            break;
        case 0x01:
        case 0x04:
        case 0x05:
            res = 0x66;
            break;
        case 0x02:
            res = 0x60;
            break;
        case 0x03:
            res = 0x7C;
            break;
    }
    return res;
}

byte NGC64Font::_getNumeralSeven(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x00:
            res = 0x7E;
            break;
        case 0x01:
            res = 0x66;
            break;
        case 0x02:
            res = 0x0C;
            break;
        case 0x03:
        case 0x04:
        case 0x05:
        case 0x06:
            res = 0x18;
            break;
    }
    return res;
}

byte NGC64Font::_getNumeralEight(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x00:
        case 0x03:
        case 0x06:
            res = 0x3C;
            break;
        case 0x01:
        case 0x02:
        case 0x04:
        case 0x05:
            res = 0x66;
            break;
    }
    return res;
}

byte NGC64Font::_getNumeralNine(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x00:
        case 0x06:
            res = 0x3C;
            break;
        case 0x01:
        case 0x02:
            res = 0x66;
            break;
        case 0x03:
            res = 0x3E;
            break;
        case 0x04:
        case 0x05:
            res = 0x06;
            break;
    }
    return res;
}

byte NGC64Font::_getLetterC(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x00:
        case 0x06:
            res = 0x3C;
            break;
        case 0x01:
        case 0x05:
             res = 0x66;
            break;
        case 0x02:
        case 0x03:
        case 0x04:
            res = 0x60;
            break;
    }
    return res;
}

byte NGC64Font::_getLetterD(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x00:
        case 0x06:
            res = 0x78;
            break;
        case 0x01:
        case 0x05:
            res = 0x6C;
            break;
        case 0x02:
        case 0x03:
        case 0x04:
            res = 0x66;
            break;
    }
    return res;
}

byte NGC64Font::_getLetterE(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x00:
        case 0x06:
            res = 0x7E;
            break;
        case 0x01:
        case 0x02:
        case 0x04:
        case 0x05:
            res = 0x60;
            break;
        case 0x03:
            res = 0x7C;
            break;
    }
    return res;
}

byte NGC64Font::_getLetterM(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x00:
        case 0x04:
        case 0x05:
        case 0x06:
            res = 0x63;
            break;
        case 0x01:
            res = 0x77;
            break;
        case 0x02:
            res = 0x7F;
            break;
        case 0x03:
            res = 0x6B;
            break;
    }
    return res;
}

byte NGC64Font::_getLetterO(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x00:
        case 0x06:
            res = 0x3C;
            break;
        case 0x01:
        case 0x02:
        case 0x03:
        case 0x04:
        case 0x05:
            res = 0x66;
            break;
    }
    return res;
}

byte NGC64Font::_getLetterR(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x00:
            res = 0x7C;
            break;
        case 0x01:
            res = 0x66;
            break;
        case 0x02:
            res = 0x66;
            break;
        case 0x03:
            res = 0x7C;
            break;
        case 0x04:
            res = 0x78;
            break;
        case 0x05:
            res = 0x6C;
            break;
        case 0x06:
            res = 0x66;
            break;
    }
    return res;
}

byte NGC64Font::_getLetterUnknown(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x00:
            res = 0x00;
            break;
        case 0x01:
            res = 0x00;
            break;
        case 0x02:
            res = 0x00;
            break;
        case 0x03:
            res = 0x00;
            break;
        case 0x04:
            res = 0x00;
            break;
        case 0x05:
            res = 0x00;
            break;
        case 0x06:
            res = 0x00;
            break;
        case 0x07:
            res = 0x00;
            break;
    }
    return res;
}

byte NGC64Font::getCharLineValue(char c, byte line) {
    byte res = 0x00;
    switch(c) {
        case '0':
            res = _getNumeralZero(line);
            break;
        case '1':
            res = _getNumeralOne(line);
            break;
        case '2':
            res = _getNumeralTwo(line);
            break;
        case '3':
            res = _getNumeralThree(line);
            break;
        case '4':
            res = _getNumeralFour(line);
            break;
        case '5':
            res = _getNumeralFive(line);
            break;
        case '6':
            res = _getNumeralSix(line);
            break;
        case '7':
            res = _getNumeralSeven(line);
            break;
        case '8':
            res = _getNumeralEight(line);
            break;
        case '9':
            res = _getNumeralNine(line);
            break;
        case 'C':
            res = _getLetterC(line);
            break;
        case 'D':
            res = _getLetterD(line);
            break;
        case 'E':
            res = _getLetterE(line);
            break;
        case 'M':
            res = _getLetterM(line);
            break;
        case 'O':
            res = _getLetterO(line);
            break;
        case 'R':
            res = _getLetterR(line);
            break;
        default:
            res = _getLetterUnknown(line);
            break;
    }
    return res;
}
