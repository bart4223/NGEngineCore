#include <NGMemoryObserver.h>
#include <NGDimmableColor.h>
#include <NGColorDotMatrix.h>

#define DELAY 10

NGColorDotMatrix *cdm = new NGColorDotMatrix();
NGDimmableColor *dcOne = new NGDimmableColor(COLOR_GREEN);
//NGDimmableColor *dcTwo = new NGDimmableColor(COLOR_RED);
NGDimmableColor *dcTwo = new NGDimmableColor(COLOR_BLUE);

bool darker = true;

void setup() {
  observeMemory(0);
  cdm->initialize();
}

void loop() {
  delay(DELAY);
  if (darker) {
    dcOne->darker();
    dcTwo->darker();
    darker = !dcOne->isMaxDamping();
  } else {
    dcOne->brighter();
    dcTwo->brighter();
    darker = dcOne->isMinDamping();
  }
  drawPoints();
}

void drawPoints() {
  colorRGB c = dcOne->getColorRGB();
  cdm->drawPoint(0, 0, c);
  cdm->drawPoint(0, 1, c);
  c = dcTwo->getColorRGB();
  cdm->drawPoint(1, 1, c);
  cdm->drawPoint(1, 2, c);
}
