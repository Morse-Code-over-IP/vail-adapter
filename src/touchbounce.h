#pragma once

#ifdef ARDUINO_ARCH_SAMD
#include <Adafruit_FreeTouch.h>
#include "bounce2.h"

#define QT_THRESHOLD 450

class TouchBounce: public Bounce {
public:
    // attach a touch pin
    void attach(int pin);

protected:
    bool readCurrentState();
    Adafruit_FreeTouch qt;
};
#endif