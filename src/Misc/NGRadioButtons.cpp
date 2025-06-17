//
//  NGRadioButtons.cpp
//  NGEngineControl
//
//  Created by Nils Grimmer on 15.06.25.
//

#include <Misc/NGRadioButtons.h>

NGRadioButtons::NGRadioButtons(NG8BitShiftRegister *shiftregister) {
    _create(shiftregister, true, 0, 0);
}

NGRadioButtons::NGRadioButtons(NG8BitShiftRegister *shiftregister, bool initshiftregister) {
    _create(shiftregister, initshiftregister, 0, 0);
}

NGRadioButtons::NGRadioButtons(NG8BitShiftRegister *shiftregister, int offsetshiftregister) {
    _create(shiftregister, true, offsetshiftregister, 0);
}

NGRadioButtons::NGRadioButtons(NG8BitShiftRegister *shiftregister, int offsetshiftregister, int startradiobutton) {
    _create(shiftregister, true, offsetshiftregister, startradiobutton);
}

NGRadioButtons::NGRadioButtons(NG8BitShiftRegister *shiftregister, bool initshiftregister, int offsetshiftregister) {
    _create(shiftregister, initshiftregister, offsetshiftregister, 0);
}

void NGRadioButtons::_create(NG8BitShiftRegister *shiftregister, bool initshiftregister, int offsetshiftregister, int startradiobutton) {
    NGSimpleKeypad::_create();
    _shiftRegister = shiftregister;
    _initShiftRegister = initshiftregister;
    _offsetShiftRegister = offsetshiftregister;
    _startRadioButton = startradiobutton;
}

void NGRadioButtons::_updateShiftRegister() {
    byte value = 1;
    for (int i = 0; i < _offsetShiftRegister; i++) {
        value = value << 1;
    }
    for (int i = _startRadioButton; i < _keyCount; i++) {
        if (_keys[i].fire) {
            _shiftRegister->setValue(value);
            break;
        }
        value = value << 1;
    }
}

void NGRadioButtons::initialize() {
    NGRadioButtons::initialize(0);
}

void NGRadioButtons::initialize(byte id) {
    NGSimpleKeypad::initialize(id);
    if (_initShiftRegister) {
        _shiftRegister->initialize();
        _shiftRegister->setValue(0);
        _updateShiftRegister();
    }
}

void NGRadioButtons::processingLoop() {
    NGSimpleKeypad::processingLoop();
    _updateShiftRegister();
}

void NGRadioButtons::resetRadioButtons() {
    for (int i = 0; i < _keyCount; i++) {
        _keys[i].fire = false;
    }
    _shiftRegister->setValue(0);
}