//
//  NGColorDotMatrixEffectVoid.cpp
//  NGEngineCore
//
//  Created by Nils Grimmer on 25.08.24.
//

#include "NGColorDotMatrixEffectVoid.h"

NGColorDotMatrixEffectVoid::NGColorDotMatrixEffectVoid(NGIPaintableComponent *ipc) {
    _create(ipc);
}

void NGColorDotMatrixEffectVoid::_create(NGIPaintableComponent *ipc) {
    _ipc = ipc;
}

void NGColorDotMatrixEffectVoid::initialize() {
    
}

void NGColorDotMatrixEffectVoid::processingLoop() {
    _ipc->clear();
}
