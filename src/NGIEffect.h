//
//  NGIEffect.h
//  NGEngineGames
//
//  Created by Nils Grimmer on 02.08.24.
//

#ifndef NGIEffect_h
#define NGIEffect_h

#if (ARDUINO >= 100)
#include <Arduino.h>
#else
#include <WProgram.h>
#endif

class NGIEffect {
    
public:
    virtual void processingLoop();
};

#endif /* NGIEffect_h */
