#include <iostream>
#include <thread>
#include <chrono>
#include "TrafficLight.h"

int main() {
    TrafficLight light;
    char input;
    std::cout << "Akıllı Trafik Lambası Simülatörü\n";
    std::cout << "Yaya varsa 'y', araç varsa 'a', çıkış için 'q' girin.\n";
    while (true) {
        std::cout << "Giriş: ";
        std::cin >> input;
        if (input == 'q') break;
        light.update(input);
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    return 0;
}