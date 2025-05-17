//
//  NGCommon.cpp
//  NGEngineCore
//
//  Created by Nils Grimmer on 09.06.21.
//

#include <NGCommon.h>
#include <Fonts/NGDefaultFont.h>

void _ensureGlobalSerial(int serialRate) {
    if (!_globalSerialStarted) {
        Serial.begin(serialRate);
        _globalSerialStarted = true;
    }
}

void setGlobalRandomSeedAnalogInput(byte input) {
    _globalRandomSeedAnalogInput = input;
}

void _ensureGlobalRandomSeed() {
    if (!_globalRandomSeedInitialized) {
        randomSeed(analogRead(_globalRandomSeedAnalogInput));
        _globalRandomSeedInitialized = true;
    }
}

void initGlobalRandomSeedWithAnalogInput(byte input) {
    setGlobalRandomSeedAnalogInput(input);
    _ensureGlobalRandomSeed();
}

bool getYesOrNo() {
    _ensureGlobalRandomSeed();
    return (random(0, 2) == 0);
}

bool IsButtonPressed(int pin) {
    return IsSwitchOn(pin);
}

bool IsSwitchOn(int pin) {
    pinMode(pin, INPUT_PULLUP);
    return digitalRead(pin) == LOW;
}

NGCustomFont* getGlobalFont()
{
    if (_globalFont == nullptr) {
        _globalFont = new NGDefaultFont();
    }
    return _globalFont;
}

