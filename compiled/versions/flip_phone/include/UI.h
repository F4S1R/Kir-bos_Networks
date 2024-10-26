// Compiled/versions/flip_phone/include/UI.h
#ifndef UI_H
#define UI_H

#include <iostream>

class UI {
public:
    UI() { std::cout << "UI initialized." << std::endl; }
    void displayMainMenu() const {
        std::cout << "Main Menu:\n1. Call\n2. Message\n3. Settings\n";
    }
};

#endif // UI_H
