//
//  NGSimpleKeypad.cpp
//  NGEngineControl
//
//  Created by Nils Grimmer on 08.11.22.
//

#include "NGSimpleKeypad.h"

NGSimpleKeypad::NGSimpleKeypad() {
    _create();
}

void NGSimpleKeypad::_create() {
    
}

void NGSimpleKeypad::_registerKey(simpleKeyKind kind, byte pin, byte id, int delay, simpleKeyMode mode, byte pinactivation) {
    simpleKeypadData key;
    key.kind = kind;
    key.mode = mode;
    key.pin = pin;
    key.pinActivation = pinactivation;
    key.id = id;
    key.delay = delay;
    _keys[_keyCount] = key;
    _keyCount++;
}

void NGSimpleKeypad::_fireCallback(byte key) {
    _keys[key].fire = true;
    if (_callback != nullptr) {
        _callback(_keys[key].id);
    }
    _keys[key].last = millis();
}

void NGSimpleKeypad::registerCallback(simpleKeypadCallbackFunc callback) {
    _callback = callback;
}

void NGSimpleKeypad::registerKey(byte pin, byte id, int delay) {
    registerKey(pin, id, delay, skmLow);
}

void NGSimpleKeypad::registerKey(byte pin, byte id, int delay, simpleKeyMode mode) {
    _registerKey(skkAlways, pin, id, delay, mode, 0);
}

void NGSimpleKeypad::registerKey(byte pin, byte pinActivation, byte id, int delay, simpleKeyMode mode) {
    _registerKey(skkActivation, pin, id, delay, mode, pinActivation);
}

void NGSimpleKeypad::initialize() {
    initialize(0);
}

void NGSimpleKeypad::initialize(byte id) {
    for (int i = 0; i < _keyCount; i++) {
        if (_keys[i].kind == skkActivation) {
            pinMode(_keys[i].pinActivation, OUTPUT);
            digitalWrite(_keys[i].pinActivation, LOW);
            _keys[i].active = false;
        } else {
            _keys[i].active = true;
        }
        switch(_keys[i].mode) {
            case skmLow:
                pinMode(_keys[i].pin, INPUT_PULLUP);
                break;
            case skmHigh:
                pinMode(_keys[i].pin, INPUT);
                break;
        }
    }
    for (int i = 0; i < _keyCount; i++) {
        if (_keys[i].id == id && _keys[i].active) {
            _fireCallback(i);
            break;
        }
    }
}

void NGSimpleKeypad::processingLoop() {
    for (int i = 0; i < _keyCount; i++) {
        _keys[i].fire = false;
        if ((millis() - _keys[i].last) >  _keys[i].delay) {
            bool fire = false;
            switch(_keys[i].mode) {
                case skmLow:
                    fire = digitalRead(_keys[i].pin) == LOW;
                    break;
                case skmHigh:
                    fire = digitalRead(_keys[i].pin) == HIGH;
                    break;
            }        
            if (fire) {
                _fireCallback(i);
            }
        }
    }
}

void NGSimpleKeypad::activateKey(byte id) {
    for (int i = 0; i < _keyCount; i++) {
        if (_keys[i].kind == skkActivation && _keys[i].id == id) {
            digitalWrite(_keys[i].pinActivation, HIGH);
            _keys[i].active = true;
        }
    }
}

void NGSimpleKeypad::deactivateKey(byte id) {
    for (int i = 0; i < _keyCount; i++) {
        if (_keys[i].kind == skkActivation && _keys[i].id == id) {
            digitalWrite(_keys[i].pinActivation, LOW);
            _keys[i].active = false;
        }
    }
}

bool NGSimpleKeypad::isKeyActive(byte id) {
    for (int i = 0; i < _keyCount; i++) {
        if (_keys[i].id == id) {
            return _keys[i].active;
        }
    }
}