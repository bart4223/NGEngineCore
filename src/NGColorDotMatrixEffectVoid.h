//
//  NGColorDotMatrixEffectVoid.h
//  NGEngineCore
//
//  Created by Nils Grimmer on 25.08.24.
//

#ifndef NGColorDotMatrixEffectVoid_h
#define NGColorDotMatrixEffectVoid_h

#if (ARDUINO >= 100)
#include <Arduino.h>
#else
#include <WProgram.h>
#endif

#include "NGIEffect.h"
#include "NGIPaintableComponent.h"

class NGColorDotMatrixEffectVoid: public NGIEffect {
    
private:
    NGIPaintableComponent *_ipc;
    
protected:
    void _create(NGIPaintableComponent *ipc);
    
public:
    NGColorDotMatrixEffectVoid(NGIPaintableComponent *ipc);
    
    void initialize();
    
    void processingLoop();
};

#endif /* NGColorDotMatrixEffectVoid_h */
