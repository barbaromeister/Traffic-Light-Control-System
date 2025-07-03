#include "TrafficLight.h"
#include <iostream>

TrafficLight::TrafficLight() : state(State::RED) {}

void TrafficLight::update(char input) {
    if (input == 'y') { // yaya butonu
        state = State::RED;
        printState();
    } else if (input == 'a') { // araç sensörü
        if (state == State::RED) {
            state = State::GREEN;
        } else if (state == State::GREEN) {
            state = State::YELLOW;
        } else {
            state = State::RED;
        }
        printState();
    }
}

void TrafficLight::printState() {
    switch (state) {
        case State::RED:
            std::cout << "KIRMIZI\n"; break;
        case State::GREEN:
            std::cout << "YEŞİL\n"; break;
        case State::YELLOW:
            std::cout << "SARI\n"; break;
    }
}