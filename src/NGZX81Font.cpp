//
//  NGZX81Font.cpp
//  NGEngineCore
//
//  Created by Nils Grimmer on 21.04.24.
//

#include "NGZX81Font.h"

NGZX81Font::NGZX81Font() {
    _create();
}

void NGZX81Font::_create() {
    
}

byte NGZX81Font::_getNumeralZero(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x01:
        case 0x06:
            res = 0x3C;
            break;
        case 0x02:
            res = 0x46;
            break;
        case 0x03:
            res = 0x4A;
            break;
        case 0x04:
            res = 0x52;
            break;
        case 0x05:
            res = 0x62;
            break;
    }
    return res;
}

byte NGZX81Font::_getNumeralOne(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x01:
            res = 0x18;
            break;
        case 0x02:
            res = 0x28;
            break;
        case 0x03:
        case 0x04:
        case 0x05:
            res = 0x08;
            break;
        case 0x06:
            res = 0x3E;
            break;
    }
    return res;
}

byte NGZX81Font::_getNumeralTwo(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x01:
        case 0x04:
            res = 0x3C;
            break;
        case 0x02:
            res = 0x42;
            break;
        case 0x03:
            res = 0x02;
            break;
        case 0x05:
            res = 0x40;
            break;
        case 0x06:
            res = 0x7E;
            break;
    }
    return res;
}

byte NGZX81Font::_getNumeralThree(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x01:
        case 0x06:
            res = 0x3C;
            break;
        case 0x02:
        case 0x05:
            res = 0x42;
            break;
        case 0x03:
            res = 0x0C;
            break;
        case 0x04:
            res = 0x02;
            break;
    }
    return res;
}

byte NGZX81Font::_getNumeralFour(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x01:
        case 0x06:
            res = 0x08;
            break;
        case 0x02:
            res = 0x18;
            break;
        case 0x03:
            res = 0x28;
            break;
        case 0x04:
            res = 0x48;
            break;
        case 0x05:
            res = 0x7E;
            break;
    }
    return res;
}

byte NGZX81Font::_getNumeralFive(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x01:
            res = 0x7E;
            break;
        case 0x02:
            res = 0x40;
            break;
        case 0x03:
            res = 0x7C;
            break;
        case 0x04:
            res = 0x02;
            break;
        case 0x05:
            res = 0x42;
            break;
        case 0x06:
            res = 0x3C;
            break;
    }
    return res;
}

byte NGZX81Font::_getNumeralSix(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x01:
        case 0x06:
            res = 0x3C;
            break;
        case 0x02:
            res = 0x40;
            break;
        case 0x03:
            res = 0x7C;
            break;
        case 0x04:
        case 0x05:
            res = 0x42;
            break;
    }
    return res;
}

byte NGZX81Font::_getNumeralSeven(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x01:
            res = 0x7E;
            break;
        case 0x02:
            res = 0x02;
            break;
        case 0x03:
            res = 0x04;
            break;
        case 0x04:
            res = 0x08;
            break;
        case 0x05:
        case 0x06:
            res = 0x10;
            break;
    }
    return res;
}

byte NGZX81Font::_getNumeralEight(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x01:
        case 0x03:
        case 0x06:
            res = 0x3C;
            break;
        case 0x02:
        case 0x04:
        case 0x05:
            res = 0x42;
            break;
    }
    return res;
}

byte NGZX81Font::_getNumeralNine(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x01:
        case 0x06:
            res = 0x3C;
            break;
        case 0x02:
        case 0x03:
            res = 0x42;
            break;
        case 0x04:
            res = 0x3E;
            break;
        case 0x05:
            res = 0x02;
            break;
    }
    return res;
}

byte NGZX81Font::_getLetterA(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x01:
            res = 0x3C;
            break;
        case 0x02:
        case 0x03:
        case 0x05:
        case 0x06:
            res = 0x42;
            break;
        case 0x04:
            res = 0x7E;
            break;
    }
    return res;
}

byte NGZX81Font::_getLetterC(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x01:
        case 0x06:
            res = 0x3C;
            break;
        case 0x02:
        case 0x05:
            res = 0x42;
            break;
        case 0x03:
        case 0x04:
            res = 0x40;
            break;
    }
    return res;
}

byte NGZX81Font::_getLetterD(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x01:
        case 0x06:
            res = 0x78;
            break;
        case 0x02:
        case 0x05:
            res = 0x44;
            break;
        case 0x03:
        case 0x04:
            res = 0x42;
            break;
    }
    return res;
}

byte NGZX81Font::_getLetterE(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x01:
        case 0x06:
            res = 0x7E;
            break;
        case 0x02:
        case 0x05:
        case 0x04:
            res = 0x40;
            break;
        case 0x03:
            res = 0x7C;
            break;
    }
    return res;
}

byte NGZX81Font::_getLetterL(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x01:
        case 0x02:
        case 0x03:
        case 0x04:
        case 0x05:
            res = 0x40;
            break;
        case 0x06:
            res = 0x7E;
            break;
    }
    return res;
}

byte NGZX81Font::_getLetterR(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x01:
        case 0x04:
            res = 0x7C;
            break;
        case 0x02:
        case 0x03:
        case 0x06:
            res = 0x42;
            break;
        case 0x05:
            res = 0x44;
            break;
    }
    return res;
}

byte NGZX81Font::_getLetterS(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x01:
        case 0x03:
        case 0x06:
            res = 0x3C;
            break;
        case 0x02:
            res = 0x40;
            break;
        case 0x04:
            res = 0x02;
            break;
        case 0x05:
            res = 0x42;
            break;
    }
    return res;
}

byte NGZX81Font::_getLetterX(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x01:
        case 0x06:
            res = 0x42;
            break;
        case 0x02:
        case 0x05:
            res = 0x24;
            break;
        case 0x03:
        case 0x04:
            res = 0x18;
            break;
    }
    return res;
}

byte NGZX81Font::_getLetterZ(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x01:
        case 0x06:
            res = 0x7E;
            break;
        case 0x02:
            res = 0x04;
            break;
        case 0x03:
            res = 0x08;
            break;
        case 0x04:
            res = 0x10;
            break;
        case 0x05:
            res = 0x20;
            break;
    }
    return res;
}

byte NGZX81Font::_getLetterUnknown(byte line) {
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

byte NGZX81Font::getCharLineValue(char c, byte line) {
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
        case 'A':
            res = _getLetterA(line);
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
        case 'L':
            res = _getLetterL(line);
            break;
        case 'R':
            res = _getLetterR(line);
            break;
        case 'S':
            res = _getLetterS(line);
            break;
        case 'X':
            res = _getLetterX(line);
            break;
        case 'Z':
            res = _getLetterZ(line);
            break;
        default:
            res = _getLetterUnknown(line);
            break;
    }
    return res;
}
