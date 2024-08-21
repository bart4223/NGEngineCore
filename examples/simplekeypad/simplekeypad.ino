#include <NGMemoryObserver.h>
#include <NGSimpleKeypad.h>

#define KEY1PIN 22
#define KEY1ID  42
#define KEY2PIN 23
#define KEY2ID  43
#define KEY3PIN 24
#define KEY3ID  44
#define KEY4PIN 25
#define KEY4ID  45

#define DELAY 500

NGSimpleKeypad skp = NGSimpleKeypad();

void setup() {
  skp.registerCallback(&SimpleKeypadCallback);
  //skp.registerKey(KEY1PIN, KEY1ID, DELAY);
  skp.registerKey(KEY1PIN, KEY1ID, DELAY, skmHigh);
  //skp.registerKey(KEY2PIN, KEY2ID, DELAY);
  //skp.registerKey(KEY3PIN, KEY3ID, DELAY);
  //skp.registerKey(KEY4PIN, KEY4ID, DELAY);
  skp.initialize();
  observeMemory(0);
}

void loop() {
  skp.processingLoop();
}

void SimpleKeypadCallback(byte id) {
  Serial.print("Call -> ");
  Serial.println(id);
  observeMemory(0);
}
