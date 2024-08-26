//
//  NGPaintableComponentEffectVoid.cpp
//  NGEngineCore
//
//  Created by Nils Grimmer on 25.08.24.
//

#include "NGPaintableComponentEffectVoid.h"

NGPaintableComponentEffectVoid::NGPaintableComponentEffectVoid(NGIPaintableComponent *ipc) {
    _create(ipc);
}

void NGPaintableComponentEffectVoid::_create(NGIPaintableComponent *ipc) {
    _ipc = ipc;
}

void NGPaintableComponentEffectVoid::initialize() {
    
}

void NGPaintableComponentEffectVoid::processingLoop() {
    _ipc->clear();
}
