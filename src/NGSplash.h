//
//  NGSplash.h
//  NGEngineGames
//
//  Created by Nils Grimmer on 05.08.24.
//

#ifndef NGSplash_h
#define NGSplash_h

#if (ARDUINO >= 100)
#include <Arduino.h>
#else
#include <WProgram.h>
#endif

#include "NGINotification.h"
#include "NGIEffect.h"

#define DEFMAXEFFECTS 5

class NGSplash {
    
private:
    NGINotification *_notification;
    NGIEffect *_effects[DEFMAXEFFECTS];
    byte _effectCount = 0;
    int _exceptionCount = 0;
    
protected:
    void _create(NGINotification *notification);
    void _raiseException(int id);
    
public:
    NGSplash(NGINotification *notification);
    
    byte registerEffect(NGIEffect *effect);
    
    void initialize();
    
    void processingLoop();
    
    void writeInfo(char* info);
    
    void clearInfo();
};

#endif /* NGSplash_h */
