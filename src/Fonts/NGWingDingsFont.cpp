//
//  NGWingDingsFont.cpp
//  NGEngineCore
//
//  Created by Nils Grimmer on 30.08.25.
//

#include "NGWingDingsFont.h"

NGWingDingsFont::NGWingDingsFont() {
    _create();
}

void NGWingDingsFont::_create() {
    
}

byte NGWingDingsFont::_getSymbolBlock(byte line) {
    return 0xFF;
}


byte NGWingDingsFont::_getSymbolCopyright(byte line) {
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

byte NGWingDingsFont::_getSymbolSmiley(byte line) {
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
        case 0x04:
            res = 0xA5;
            break;
        case 0x03:
            res = 0x81;
            break;
        case 0x05:
            res = 0x99;
            break;
    }
    return res;
}

byte NGWingDingsFont::_getSymbolSmileySad(byte line) {
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
            res = 0xA5;
            break;
        case 0x03:
            res = 0x81;
            break;
        case 0x04:
            res = 0x99;
            break;
    }
    return res;
}

byte NGWingDingsFont::_getSymbolTreeThick(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x00:
        case 0x07:
            res = 0x18;
            break;
        case 0x01:
        case 0x02:
            res = 0x3C;
            break;
        case 0x03:
        case 0x04:
            res = 0x7E;
            break;
        case 0x05:
        case 0x06:
            res = 0xFF;
            break;
    }
    return res;
}

byte NGWingDingsFont::_getSymbolTreeThin(byte line) {
    byte res = 0x00;
    switch(line) {
        case 0x00:
        case 0x06:
        case 0x07:
            res = 0x18;
            break;
        case 0x01:
        case 0x02:
            res = 0x3C;
            break;
        case 0x03:
        case 0x04:
            res = 0x7E;
            break;
        case 0x05:
            res = 0xFF;
            break;
    }
    return res;
}

byte NGWingDingsFont::_getSymbolUnknown(byte line) {
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

byte NGWingDingsFont::getCharLineValue(char c, byte line) {
    byte res = 0x00;
    switch(c) {
        case 'B':
            res = _getSymbolBlock(line);
            break;
        case 'C':
            res = _getSymbolCopyright(line);
            break;
        case 'S':
            res = _getSymbolSmiley(line);
            break;
        case 's':
            res = _getSymbolSmileySad(line);
            break;    
        case 'T':
            res = _getSymbolTreeThick(line);
            break;    
        case 't':
            res = _getSymbolTreeThin(line);
            break;    
        default:
            res = _getSymbolUnknown(line);
            break;
    }
    return res;
}