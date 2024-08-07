//
//  NGStrings.cpp
//  NGEngineCore
//
//  Created by Nils Grimmer on 27.12.21.
//

#include "NGStrings.h"

unsigned char* FloatToChar(float value) {
    String s = String(value);
    unsigned char *res = (unsigned char*)malloc(s.length() + 1);
    s.getBytes(res, s.length() + 1);
    return res;
}

unsigned char* LeftPadInteger(int value, int digits) {
    String s = String(value);
    int count  = digits - s.length();
    for (int i = count; i > 0; i--) {
        s = "0" + s;
    }
    unsigned char *res = (unsigned char*)malloc(s.length() + 1);
    s.getBytes(res, s.length() + 1);
    return res;
}

int getSize(char * s) {
    char * t;
    int size = 0;
    for (t = s; *t != '\0'; t++) {
        size++;
    }
    return size;
}
