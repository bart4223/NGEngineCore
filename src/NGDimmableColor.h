//
//  NGDimmableColor.h
//  NGEngineCore
//
//  Created by Nils Grimmer on 29.04.24.
//

#ifndef NGDimmableColor_h
#define NGDimmableColor_h

#include <Arduino.h>
#include <NGCommonGraphics.h>

#define DEFMINDAMPING 0
#define DEFMAXDAMPING -21

class NGDimmableColor {

private:
    colorRGB _color;
    int _damping = 0;

protected:
    void _create(colorRGB color);
    
    float _getFactor();
    
public:
    NGDimmableColor(colorRGB color);
    
    colorRGB getColorRGB();
    
    colorRGB setDamping(int damping);
    
    int getDamping();
    
    void brighter();
    
    void darker();
    
    bool isMaxDamping();
    
    bool isMinDamping();
    
    int getMinDamping();
    
    int getMaxDamping();
    
    int getDampingRange();
};

#endif /* NGDimmableColor_h */
