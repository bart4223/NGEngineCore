//
//  NG8BitShiftRegister.h
//  NGEngineCore
//
//  Created by Nils Grimmer on 17.10.23.
//

#ifndef NG8BitShiftRegister_h
#define NG8BitShiftRegister_h

#include <Arduino.h>

enum shiftRegisterDirection { srdLeft, srdRight };

class NG8BitShiftRegister {
    
private:
    byte _latchPin;
    byte _clockPin;
    byte _dataPin;
    byte _value = 0;
    int _updateCount = 0;
    
protected:
    void _create(byte latchPin, byte clockPin, byte dataPin);
    
    void _processingValue();
public:
    NG8BitShiftRegister(byte latchPin, byte clockPin, byte dataPin);
    
    void initialize();
    
    void setValue(byte value);
    
    byte getValue();
    
    void shiftValue();
    
    void shiftValue(shiftRegisterDirection direction);
    
    void beginUpdate();
    
    void endUpdate();
};

#endif /* NG8BitShiftRegister_h */
