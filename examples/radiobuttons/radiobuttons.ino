#define KEYOFFSET 0 //0, 4
#define STARTKEY 1 //0, 1

#include <NGEngineCore.h>

#define LATCHPINONE  4
#define CLOCKPINONE  5
#define DATAPINONE   3

#define KEY1PIN            9
#define KEY1ID            42
#define KEY2PIN           10
#define KEY2ID            43
#define KEY3PIN           11
#define KEY3ID            44
#define KEY4PIN           12
#define KEY4ID            45

#define DELAY 500

NG8BitShiftRegister *srOne = new NG8BitShiftRegister(LATCHPINONE, CLOCKPINONE, DATAPINONE);
NGRadioButtons rbOne = NGRadioButtons(srOne, KEYOFFSET, STARTKEY);

void setup() {
  observeMemory(0);
  rbOne.registerCallback(&RadioButtonsCallback);
  rbOne.registerKey(KEY1PIN, KEY1ID, DELAY);
  rbOne.registerKey(KEY2PIN, KEY2ID, DELAY);
  rbOne.registerKey(KEY3PIN, KEY3ID, DELAY);
  rbOne.registerKey(KEY4PIN, KEY4ID, DELAY);
  rbOne.initialize();
  //rbOne.initialize(KEY1ID);
  observeMemory(0);
}

void loop() {
  rbOne.processingLoop();
}

void RadioButtonsCallback(byte id) {
  Serial.print("Call -> ");
  Serial.println(id);
  switch(id) {
    case KEY1ID:
      rbOne.resetRadioButtons();
      break;
    case KEY2ID:
      break;
    case KEY3ID:
      break;
    case KEY4ID:
      break;
  }
}