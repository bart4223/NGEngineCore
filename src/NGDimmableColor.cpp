//
//  NGDimmableColor.cpp
//  NGEngineCore
//
//  Created by Nils Grimmer on 29.04.24.
//

#include "NGDimmableColor.h"

NGDimmableColor::NGDimmableColor(colorRGB color) {
    _create(color);
}

NGDimmableColor::_create(colorRGB color) {
    _color = color;
}

float NGDimmableColor::_getFactor() {
    float res;
    switch(_damping) {
        case 0:
            res = 1.0;
            break;
        case -1:
            res = 0.9;
            break;
        case -2:
            res = 0.8;
            break;
        case -3:
            res = 0.7;
            break;
        case -4:
            res = 0.6;
            break;
        case -5:
            res = 0.5;
            break;
        case -6:
            res = 0.4;
            break;
        case -7:
            res = 0.3;
            break;
        case -8:
            res = 0.2;
            break;
        case -9:
            res = 0.13;
            break;
        case -10:
            res = 0.096;
            break;
        case -11:
            res = 0.085;
            break;
        case -12:
            res = 0.07;
            break;
        case -13:
            res = 0.06;
            break;
        case -14:
            res = 0.05;
            break;
        case -15:
            res = 0.04;
            break;
        case -16:
            res = 0.03;
            break;
        case -17:
            res = 0.02;
            break;
        case -18:
            res = 0.013;
            break;
        case -19:
            res = 0.0096;
            break;
        case -20:
            res = 0.0085;
            break;
        case -21:
            res = 0.007;
            break;
    }
    return res;
}

colorRGB NGDimmableColor::getColorRGB() {
    colorRGB res;
    float factor = _getFactor();
    res.red = _color.red * factor;
    res.green = _color.green * factor;
    res.blue = _color.blue * factor;
    return res;
}

colorRGB NGDimmableColor::setDamping(int damping) {
    _damping = damping;
    return getColorRGB();
}

int NGDimmableColor::getDamping() {
    return _damping;
}

void NGDimmableColor::brighter() {
    if (!isMinDamping()) {
        _damping += 1;
    }
}

void NGDimmableColor::darker() {
    if (!isMaxDamping()) {
        _damping -= 1;
    }
}

bool NGDimmableColor::isMaxDamping() {
    return _damping <= DEFMAXDAMPING;
}

bool NGDimmableColor::isMinDamping() {
    return _damping >= DEFMINDAMPING;
}
