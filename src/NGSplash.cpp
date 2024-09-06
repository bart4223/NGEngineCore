//
//  NGSplash.cpp
//  NGEngineGames
//
//  Created by Nils Grimmer on 05.08.24.
//

#include "NGCommon.h"
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

void NGSplash::registerPaintableComponent(NGIPaintableComponent  *paintablecomponent) {
    _paintableComponent = paintablecomponent;
}

byte NGSplash::registerEffect(NGIEffect *effect) {
    return registerEffect(effect, 0);
}

byte NGSplash::registerEffect(NGIEffect *effect, int startdelay) {
    return registerEffect(effect, startdelay, 0);
}

byte NGSplash::registerEffect(NGIEffect *effect, int startdelay, int runtime) {
    byte res = _splashEffectCount;
    if (_splashEffectCount < DEFMAXSPLASHEFFECTS) {
        splashEffect se;
        se.effect = effect;
        se.startdelay = startdelay;
        se.runtime = runtime;
        _splashEffects[res] = se;
        _splashEffectCount++;
    } else {
        _raiseException(ExceptionTooMuchSplashEffectCount);
    }
    return res;
}

void NGSplash::setLogging(bool logging) {
    _logging = logging;
}

void NGSplash::initialize() {
    long start = millis();
    for (int i = 0; i < _splashEffectCount; i++) {
        _splashEffects[i].effect->initialize();
        _splashEffects[i].start = start;
    }
}

void NGSplash::processingLoop() {
    if (_paintableComponent != nullptr) {
        _paintableComponent->beginUpdate();
    }
    long current = millis();
    for (int i = 0; i < _splashEffectCount; i++) {
        if (_splashEffects[i].start > 0) {
            bool ok = (current - _splashEffects[i].start) > _splashEffects[i].startdelay;
            if (ok && _splashEffects[i].runtime > 0) {
                ok = (current - _splashEffects[i].start - _splashEffects[i].startdelay) < _splashEffects[i].runtime;
                if (!ok) {
                    _splashEffects[i].start = 0;
                    #ifdef NG_PLATFORM_MEGA
                    if (_logging) {
                        char log[100];
                        sprintf(log, "Splash effect %d finished", i);
                        writeInfo(log);
                    }
                    #endif
                }
            }
            if (ok) {
                _splashEffects[i].effect->processingLoop();
            }
        }
    }
    if (_paintableComponent != nullptr) {
        _paintableComponent->endUpdate();
    }
}

void NGSplash::writeInfo(char* info) {
    _notification->writeInfo(info);
}

void NGSplash::clearInfo() {
    _notification->clear();
}

bool NGSplash::isFinished() {
    for (int i = 0; i < _splashEffectCount; i++) {
        if (_splashEffects[i].start > 0) {
            return false;
        }
    }
    return true;
}

int NGSplash::getEffectCount() {
    return _splashEffectCount;
}
