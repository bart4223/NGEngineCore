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

#include "NGIEffect.h"

class NGSplash {
    
protected:
    void _create();
    
public:
    NGSplash();
};

#endif /* NGSplash_h */
