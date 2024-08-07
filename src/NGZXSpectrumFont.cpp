//
//  NGZXSpectrumFont.cpp
//  NGEngineCore
//
//  Created by Nils Grimmer on 24.04.24.
//

#include "NGZXSpectrumFont.h"

NGZXSpectrumFont::NGZXSpectrumFont() {
    _create();
}

void NGZXSpectrumFont::_create() {
    
}

byte NGZXSpectrumFont::_getNumeralZero(byte line) {
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

byte NGZXSpectrumFont::_getNumeralOne(byte line) {
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

byte NGZXSpectrumFont::_getNumeralTwo(byte line) {
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

byte NGZXSpectrumFont::_getNumeralThree(byte line) {
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

byte NGZXSpectrumFont::_getNumeralFour(byte line) {
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

byte NGZXSpectrumFont::_getNumeralFive(byte line) {
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

byte NGZXSpectrumFont::_getNumeralSix(byte line) {
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

byte NGZXSpectrumFont::_getNumeralSeven(byte line) {
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

byte NGZXSpectrumFont::_getNumeralEight(byte line) {
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

byte NGZXSpectrumFont::_getNumeralNine(byte line) {
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

byte NGZXSpectrumFont::_getLetterA(byte line) {
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

byte NGZXSpectrumFont::_getLetterC(byte line) {
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

byte NGZXSpectrumFont::_getLetterL(byte line) {
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

byte NGZXSpectrumFont::_getLetterR(byte line) {
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

byte NGZXSpectrumFont::_getLetterS(byte line) {
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

byte NGZXSpectrumFont::_getLetterX(byte line) {
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

byte NGZXSpectrumFont::_getLetterZ(byte line) {
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

byte NGZXSpectrumFont::_getLowerLetterA(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x02:
            res = 0x38;
            break;
        case 0x03:
            res = 0x04;
            break;
        case 0x04:
        case 0x06:
            res = 0x3C;
            break;
        case 0x05:
            res = 0x44;
            break;
    }
    return res;
}

byte NGZXSpectrumFont::_getLowerLetterC(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x02:
        case 0x06:
            res = 0x38;
            break;
        case 0x03:
        case 0x04:
        case 0x05:
            res = 0x40;
            break;

    }
    return res;
}

byte NGZXSpectrumFont::_getLowerLetterD(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x01:
            res = 0x04;
            break;
        case 0x02:
            res = 0x04;
            break;
        case 0x03:
            res = 0x3C;
            break;
        case 0x04:
            res = 0x44;
            break;
        case 0x05:
            res = 0x44;
            break;
        case 0x06:
            res = 0x3C;
            break;
    }
    return res;
}

byte NGZXSpectrumFont::_getLowerLetterE(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x02:
            res = 0x38;
            break;
        case 0x03:
            res = 0x44;
            break;
        case 0x04:
            res = 0x78;
            break;
        case 0x05:
            res = 0x40;
            break;
        case 0x06:
            res = 0x3C;
            break;
    }
    return res;
}

byte NGZXSpectrumFont::_getLowerLetterH(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x01:
        case 0x02:
            res = 0x40;
            break;
        case 0x03:
            res = 0x78;
            break;
        case 0x04:
        case 0x05:
        case 0x06:
            res = 0x44;
            break;
    }
    return res;
}

byte NGZXSpectrumFont::_getLowerLetterI(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x01:
        case 0x04:
        case 0x05:
            res = 0x10;
            break;
        case 0x03:
            res = 0x30;
            break;
        case 0x06:
            res = 0x38;
            break;
    }
    return res;
}

byte NGZXSpectrumFont::_getLowerLetterL(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x01:
        case 0x02:
        case 0x03:
        case 0x04:
        case 0x05:
            res = 0x10;
            break;
        case 0x06:
            res = 0x0C;
            break;
    }
    return res;
}

byte NGZXSpectrumFont::_getLowerLetterN(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x02:
            res = 0x78;
            break;
        case 0x03:
        case 0x04:
        case 0x05:
        case 0x06:
            res = 0x44;
            break;
    }
    return res;
}

byte NGZXSpectrumFont::_getLowerLetterR(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x02:
            res = 0x1C;
            break;
        case 0x03:
        case 0x04:
        case 0x05:
        case 0x06:
            res = 0x20;
            break;
    }
    return res;
}

byte NGZXSpectrumFont::_getLowerLetterS(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x02:
        case 0x04:
            res = 0x38;
            break;
        case 0x03:
            res = 0x40;
            break;
        case 0x05:
            res = 0x04;
            break;
        case 0x06:
            res = 0x78;
            break;
    }
    return res;
}

byte NGZXSpectrumFont::_getLowerLetterT(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x01:
        case 0x03:
        case 0x04:
        case 0x05:
            res = 0x10;
            break;
        case 0x02:
            res = 0x38;
            break;
        case 0x06:
            res = 0x0C;
            break;
    }
    return res;
}

byte NGZXSpectrumFont::_getLetterCopyright(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x00:
        case 0x07:
            res = 0x3C;
            break;
        case 0x01:
        case 0x06:
            res = 0x42;
            break;
        case 0x02:
        case 0x05:
            res = 0x99;
            break;
        case 0x03:
        case 0x04:
            res = 0xA1;
            break;
    }
    return res;
}

byte NGZXSpectrumFont::_getLetterUnknown(byte line) {
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

byte NGZXSpectrumFont::getCharLineValue(char c, byte line) {
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
        case 'a':
            res = _getLowerLetterA(line);
            break;
        case 'c':
            res = _getLowerLetterC(line);
            break;
        case 'd':
            res = _getLowerLetterD(line);
            break;
        case 'e':
            res = _getLowerLetterE(line);
            break;
        case 'h':
            res = _getLowerLetterH(line);
            break;
        case 'i':
            res = _getLowerLetterI(line);
            break;
        case 'l':
            res = _getLowerLetterL(line);
            break;
        case 'n':
            res = _getLowerLetterN(line);
            break;
        case 'r':
            res = _getLowerLetterR(line);
            break;
        case 's':
            res = _getLowerLetterS(line);
            break;
        case 't':
            res = _getLowerLetterT(line);
            break;
        default:
            byte b = c;
            switch(b) {
                case 0xA9:
                    res = _getLetterCopyright(line);
                    break;
                default:
                    res = _getLetterUnknown(line);
                    break;
            }
    }
    return res;
}
