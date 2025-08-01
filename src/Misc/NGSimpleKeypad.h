//
//  NGSimpleKeypad.h
//  NGEngineControl
//
//  Created by Nils Grimmer on 08.11.22.
//

#ifndef NGSimpleKeypad_h
#define NGSimpleKeypad_h

#include <Arduino.h>

#define DEFMAXKEYS 5

enum simpleKeyMode {skmLow, skmHigh};
enum simpleKeyKind {skkAlways, skkActivation};

typedef void (*simpleKeypadCallbackFunc)(byte id);

struct simpleKeypadDataStruct
{
    simpleKeyKind kind;
    simpleKeyMode mode;
    byte pin;
    byte pinActivation;
    bool active;
    byte id;
    int delay;
    long last;
    bool fire = false;
};
typedef struct simpleKeypadDataStruct simpleKeypadData;

class NGSimpleKeypad {
    
protected:
    simpleKeypadData _keys[DEFMAXKEYS];
    int _keyCount = 0;
    simpleKeypadCallbackFunc _callback = nullptr;
    
    void _create();
    void _registerKey(simpleKeyKind kind, byte pin, byte id, int delay, simpleKeyMode mode, byte pinactivation);
    void _fireCallback(byte key);

public:
    NGSimpleKeypad();
    
    void registerCallback(simpleKeypadCallbackFunc callback);
    
    void registerKey(byte pin, byte id, int delay);
    
    void registerKey(byte pin, byte id, int delay, simpleKeyMode mode);
    
    void registerKey(byte pin, byte pinActivation, byte id, int delay, simpleKeyMode mode);
    
    void initialize();

    void initialize(byte id);
    
    void processingLoop();
    
    void activateKey(byte id);
    
    void deactivateKey(byte id);
    
    bool isKeyActive(byte id);
};

#endif /* NGSimpleKeypad_h */
