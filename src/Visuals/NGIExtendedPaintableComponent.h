//
//  NGIExtendedPaintableComponent.h
//  NGEngineControl
//
//  Created by Nils Grimmer on 23.06.25.
//

#ifndef NGIExtendedPaintableComponent_h
#define NGIExtendedPaintableComponent_h

#include <NGCommonGraphics.h>

class NGIExtendedPaintableComponent {
    
public:
    virtual void drawCircleSection(int x0, int y0, int radius, int startAngle, int endAngle, colorRGB color);
    
    virtual void setAngleOffset(int angleOffset);
};

#endif /* NGIExtendedPaintableComponent_h */
