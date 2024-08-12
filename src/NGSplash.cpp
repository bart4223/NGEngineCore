//
//  NGSplash.cpp
//  NGEngineGames
//
//  Created by Nils Grimmer on 05.08.24.
//

#include "NGExceptionDefinitions.h"
#include "NGSplash.h"

NGSplash::NGSplash(NGINotification *notification) {
    _create(notification);
}

void NGSplash::_create(NGINotification *notification) {
    _notification = notification;
}

void NGSplash::_raiseException(int id) {
    char info[100];
    clearInfo();
    _exceptionCount++;
    sprintf(info, "Ex %d(%d)", id, _exceptionCount);
    writeInfo(info);
}

byte NGSplash::registerEffect(NGIEffect *effect) {
    byte res = _effectCount;
    if (_effectCount < DEFMAXEFFECTS) {
        _effects[res] = effect;
        _effectCount++;
    } else {
        _raiseException(ExceptionTooMuchSplashEffectCount);
    }
    return res;
}

void NGSplash::initialize() {
    for (int i = 0; i < _effectCount; i++) {
        _effects[i]->initialize();
    }
}

void NGSplash::processingLoop() {
    for (int i = 0; i < _effectCount; i++) {
        _effects[i]->processingLoop();
    }
}

void NGSplash::writeInfo(char* info) {
    _notification->writeInfo(info);
}

void NGSplash::clearInfo() {
    _notification->clear();
}
