//
//  NGPaintableComponentEffectVoid.h
//  NGEngineCore
//
//  Created by Nils Grimmer on 25.08.24.
//

#ifndef NGPaintableComponentEffectVoid_h
#define NGPaintableComponentEffectVoid_h

#include <Arduino.h>
#include <NGIEffect.h>
#include <NGIPaintableComponent.h>

class NGPaintableComponentEffectVoid: public NGIEffect {
    
private:
    NGIPaintableComponent *_ipc;
    
protected:
    void _create(NGIPaintableComponent *ipc);
    
public:
    NGPaintableComponentEffectVoid(NGIPaintableComponent *ipc);
    
    void initialize();
    
    void processingLoop();
};

#endif /* NGPaintableComponentEffectVoid_h */
