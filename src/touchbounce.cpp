#include "touchbounce.h"

#ifdef ARDUINO_ARCH_SAMD

void TouchBounce::attach(int pin) {
    this->qt = Adafruit_FreeTouch(pin, OVERSAMPLE_2, RESISTOR_0, FREQ_MODE_SPREAD);
    this->qt.begin();
}

bool TouchBounce::readCurrentState() {
    int val = this->qt.measure();
    return val > QT_THRESHOLD;
}
#endif