#include "StringInstrument.h"
#include <iostream>

StringInstrument::StringInstrument()
    : volume(DEFAULT_VOLUME) {
}

StringInstrument::~StringInstrument() {
}

void StringInstrument::playNote(int pitch) {
    if (pitch >= 0 && pitch < 128) {
        std::cout << "Playing note at pitch " << pitch << " with volume " << volume << std::endl;
    }
}

void StringInstrument::setVolume(int vol) {
    if (vol >= 0 && vol <= 127) {
        volume = vol;
    }
}
