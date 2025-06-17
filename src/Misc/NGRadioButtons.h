//
//  NGRadioButtons.h
//  NGEngineControl
//
//  Created by Nils Grimmer on 15.06.25.
//

#ifndef NGRadioButtons_h
#define NGRadioButtons_h

#include <Arduino.h>
#include <Misc/NGSimpleKeypad.h>
#include <Misc/NG8BitShiftRegister.h>

class NGRadioButtons : public NGSimpleKeypad {

private:
    NG8BitShiftRegister *_shiftRegister;
    bool _initShiftRegister = true;
    int _offsetShiftRegister = 0;
    int _startRadioButton = 0;

protected:
    void _create(NG8BitShiftRegister *shiftregister, bool initshiftregister, int offsetshiftregister, int startradiobutton);
    void _updateShiftRegister();

public:
    NGRadioButtons(NG8BitShiftRegister *shiftregister);

    NGRadioButtons(NG8BitShiftRegister *shiftregister, bool initshiftregister);

    NGRadioButtons(NG8BitShiftRegister *shiftregister, int offsetshiftregister);

    NGRadioButtons(NG8BitShiftRegister *shiftregister, int offsetshiftregister, int startradiobutton);

    NGRadioButtons(NG8BitShiftRegister *shiftregister, bool initshiftregister, int offsetshiftregister);

    void initialize();

    void initialize(byte id);

    void processingLoop();

    void resetRadioButtons();
};

#endif /* NGRadioButtons_h */