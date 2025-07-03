#pragma once

enum class State { RED, GREEN, YELLOW };

class TrafficLight {
    State state;
public:
    TrafficLight();
    void update(char input);
    void printState();
};