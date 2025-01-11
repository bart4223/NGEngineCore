//
//  NGINotification.h
//  NGEngineControl
//
//  Created by Nils Grimmer on 11.06.21.
//

#ifndef NGINotification_h
#define NGINotification_h

#include <Arduino.h>

class NGINotification {
       
public:
    virtual void initialize();
    virtual char* getName();
    virtual void clear();
    virtual void clear(int line);
    virtual void writeInfo(char* info);
    virtual void writeInfo(char* info, int line);
    virtual void writeInfo(char* info, int line, int column);

};
    
#endif /* NGINotification_h */
