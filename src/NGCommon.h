//
//  NGCommon.h
//  NGEngineCore
//
//  Created by Nils Grimmer on 09.06.21.
//

#ifndef NGCommon_h
#define NGCommon_h

#if (ARDUINO >= 100)
#include <Arduino.h>
#else
#include <WProgram.h>
#endif

#ifdef ARDUINO_AVR_UNO
#define NG_PLATFORM_AVR
#define NG_PLATFORM_UNO
#elif ARDUINO_AVR_MEGA2560
#define NG_PLATFORM_AVR
#define NG_PLATFORM_MEGA
#elif ARDUINO_AVR_NANO
#define NG_PLATFORM_AVR
#define NG_PLATFORM_NANO
#else
#define NG_PLATFORM_ARM
#endif

#define DEFAULTSERIALRATE   9600
#define NONAME              (char*)""

enum functionType { ftMenu, ftLeft, ftRight, ftUp, ftDown, ftOK, ftPlay };

static bool _globalSerialStarted = false;

static bool _globalRandomSeedInitialized = false;

static byte _globalRandomSeedAnalogInput = A0;

void _ensureGlobalSerial(int serialRate);

void setGlobalRandomSeedAnalogInput(byte input);

bool getYesOrNo();

bool IsButtonPressed(int pin);

bool IsSwitchOn(int pin);

#endif /* NGCommon_h */
