#define ACTIVATION // ALWAYS, ACTIVATION

#include <NGMemoryObserver.h>
#include <NGSimpleKeypad.h>

#define KEY1PINACTIVATION 22
#define KEY1PIN           23
#define KEY1ID            42
#define KEY2PINACTIVATION 24
#define KEY2PIN           25
#define KEY2ID            43
#define KEY3PINACTIVATION 26
#define KEY3PIN           27
#define KEY3ID            44
#define KEY4PINACTIVATION 28
#define KEY4PIN           29
#define KEY4ID            45

#define DELAY 500
#define ACTIVATIONDELAY1 1500
#define ACTIVATIONDELAY2 2500

NGSimpleKeypad skp = NGSimpleKeypad();

long lastActivationKey1 = 0;
long lastActivationKey2 = 0;

void setup() {
  skp.registerCallback(&SimpleKeypadCallback);
  #ifdef ALWAYS
  //skp.registerKey(KEY1PIN, KEY1ID, DELAY);
  skp.registerKey(KEY1PIN, KEY1ID, DELAY, skmHigh);
  //skp.registerKey(KEY2PIN, KEY2ID, DELAY);
  //skp.registerKey(KEY3PIN, KEY3ID, DELAY);
  //skp.registerKey(KEY4PIN, KEY4ID, DELAY);
  #endif
  #ifdef ACTIVATION
  skp.registerKey(KEY1PIN, KEY1PINACTIVATION, KEY1ID, DELAY, skmHigh);
  skp.registerKey(KEY2PIN, KEY2PINACTIVATION, KEY2ID, DELAY, skmHigh);
  #endif
  skp.initialize();
  observeMemory(0);
}

void loop() {
  #ifdef ACTIVATION
  if (!skp.isKeyActive(KEY1ID) && millis() - lastActivationKey1 > ACTIVATIONDELAY1) {
    skp.activateKey(KEY1ID);
    lastActivationKey1 = millis();
  }
  if (!skp.isKeyActive(KEY2ID) && millis() - lastActivationKey2 > ACTIVATIONDELAY2) {
    skp.activateKey(KEY2ID);
    lastActivationKey2 = millis();
  }
  #endif
  skp.processingLoop();
}

void SimpleKeypadCallback(byte id) {
  Serial.print("Call -> ");
  Serial.println(id);
  #ifdef ACTIVATION
  skp.deactivateKey(id);
  switch(id) {
    case KEY1ID:
      lastActivationKey1 = millis();
      break;
    case KEY2ID:
      lastActivationKey2 = millis();
      break;
  }
  #endif
  observeMemory(0);
}
