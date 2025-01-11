//
//  NGIEffect.h
//  NGEngineGames
//
//  Created by Nils Grimmer on 02.08.24.
//

#ifndef NGIEffect_h
#define NGIEffect_h

#include <Arduino.h>

class NGIEffect {
    
public:
    virtual void initialize();
    
    virtual void processingLoop();
};

#endif /* NGIEffect_h */
