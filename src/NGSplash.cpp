//
//  NGSplash.cpp
//  NGEngineGames
//
//  Created by Nils Grimmer on 05.08.24.
//

#include "NGExceptionDefinitions.h"
#include "NGSplash.h"

NGSplash::NGSplash() {
    _create();
}

void NGSplash::_create() {
    
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
