//
//  NGSplash.h
//  NGEngineGames
//
//  Created by Nils Grimmer on 05.08.24.
//

#ifndef NGSplash_h
#define NGSplash_h

#include <Arduino.h>
#include <NGINotification.h>
#include <NGIPaintableComponent.h>
#include <NGIEffect.h>

#define DEFMAXSPLASHEFFECTS 5

struct splashEffectStruct
{
    NGIEffect *effect;
    int startdelay = 0;
    int runtime = 0;
    long start = 0;
};
typedef struct splashEffectStruct splashEffect;

class NGSplash {
    
private:
    NGINotification *_notification = nullptr;
    splashEffect _splashEffects[DEFMAXSPLASHEFFECTS];
    byte _splashEffectCount = 0;
    int _exceptionCount = 0;
    bool _logging = false;
    NGIPaintableComponent *_paintableComponent = nullptr;
    
protected:
    void _create(NGINotification *notification);
    void _raiseException(int id);
    
public:
    NGSplash();
    
    NGSplash(NGINotification *notification);
    
    void registerPaintableComponent(NGIPaintableComponent  *paintablecomponent);
    
    byte registerEffect(NGIEffect *effect);
    
    byte registerEffect(NGIEffect *effect, int startdelay);
    
    byte registerEffect(NGIEffect *effect, int startdelay, int runtime);
    
    void setLogging(bool logging);
    
    void initialize();
    
    void processingLoop();
    
    void writeInfo(char* info);
    
    void clearInfo();
    
    bool isFinished();
    
    int getEffectCount();
};

#endif /* NGSplash_h */
