//
//  NGDefaultFont.cpp
//  NGEngineCore
//
//  Created by Nils Grimmer on 21.04.24.
//

#include "NGDefaultFont.h"

NGDefaultFont::NGDefaultFont() {
    _create();
}

void NGDefaultFont::_create() {
    
}

byte NGDefaultFont::_getNumeralZero(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x00:
        case 0x07:
            res = 0x7C;
            break;
        case 0x01:
        case 0x02:
        case 0x03:
        case 0x04:
        case 0x05:
        case 0x06:
            res = 0xCE;
            break;
    }
    return res;
}

byte NGDefaultFont::_getNumeralOne(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x00:
        case 0x04:
        case 0x05:
        case 0x06:
        case 0x07:
            res = 0x1C;
            break;
        case 0x01:
            res = 0x3C;
            break;
        case 0x02:
            res = 0x7C;
            break;
        case 0x03:
            res = 0xDC;
            break;
    }
    return res;
}

byte NGDefaultFont::_getNumeralTwo(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x00:
            res = 0x7C;
            break;
        case 0x01:
            res = 0xCE;
            break;
        case 0x02:
            res = 0x8E;
            break;
        case 0x03:
            res = 0x0E;
            break;
        case 0x04:
            res = 0x1C;
            break;
        case 0x05:
            res = 0x30;
            break;
        case 0x06:
            res = 0x60;
            break;
        case 0x07:
            res = 0xFE;
            break;
    }
    return res;
}

byte NGDefaultFont::_getNumeralThree(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x00:
        case 0x07:
            res = 0x7C;
            break;
        case 0x01:
        case 0x06:
            res = 0xCE;
            break;
        case 0x02:
        case 0x05:
            res = 0x8E;
            break;
        case 0x03:
            res = 0x38;
            break;
        case 0x04:
            res = 0x0E;
            break;
    }
    return res;
}

byte NGDefaultFont::_getNumeralFour(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x00:
            res = 0x18;
            break;
        case 0x01:
            res = 0x30;
            break;
        case 0x02:
            res = 0x60;
            break;
        case 0x03:
            res = 0xC0;
            break;
        case 0x04:
            res = 0xDC;
            break;
        case 0x05:
            res = 0xFE;
            break;
        case 0x06:
        case 0x07:
            res = 0x1C;
            break;
    }
    return res;
}

byte NGDefaultFont::_getNumeralFive(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x00:
            res = 0xFE;
            break;
        case 0x01:
        case 0x02:
            res = 0xC0;
            break;
        case 0x03:
            res = 0xFC;
            break;
        case 0x04:
        case 0x05:
            res = 0x0E;
            break;
        case 0x06:
            res = 0x8E;
            break;
        case 0x07:
            res = 0x7C;
            break;
    }
    return res;
}

byte NGDefaultFont::_getNumeralSix(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x00:
            res = 0x18;
            break;
        case 0x01:
            res = 0x30;
            break;
        case 0x02:
            res = 0x60;
            break;
        case 0x03:
        case 0x07:
            res = 0x7C;
            break;
        case 0x04:
        case 0x05:
        case 0x06:
            res = 0xCE;
            break;
    }
    return res;
}

byte NGDefaultFont::_getNumeralSeven(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x00:
            res = 0xFE;
            break;
        case 0x01:
        case 0x02:
            res = 0x0E;
            break;
        case 0x03:
            res = 0x0C;
            break;
        case 0x04:
        case 0x05:
            res = 0x18;
            break;
        case 0x06:
            res = 0x30;
            break;
        case 0x07:
            res = 0x60;
            break;
    }
    return res;
}

byte NGDefaultFont::_getNumeralEight(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x00:
        case 0x03:
        case 0x07:
            res = 0x7C;
            break;
        case 0x01:
        case 0x02:
        case 0x04:
        case 0x05:
        case 0x06:
            res = 0xCE;
            break;
    }
    return res;
}

byte NGDefaultFont::_getNumeralNine(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x00:
        case 0x04:
            res = 0x7C;
            break;
        case 0x01:
        case 0x02:
        case 0x03:
            res = 0xCE;
            break;
        case 0x05:
            res = 0x0C;
            break;
        case 0x06:
            res = 0x18;
            break;
        case 0x07:
            res = 0x70;
            break;
    }
    return res;
}

byte NGDefaultFont::getCharLineValue(char c, byte line) {
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
    }
    return res;
}
