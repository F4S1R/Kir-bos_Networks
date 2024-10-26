// Compiled/versions/flip_phone/ui_flip.h
#ifndef UI_FLIP_H
#define UI_FLIP_H

class UIFlip {
public:
    void displayMainMenu() const;
};

#endif

// Compiled/versions/flip_phone/ui_flip.cpp
#include "ui_flip.h"
#include <iostream>

void UIFlip::displayMainMenu() const {
    std::cout << "Main Menu\n1. Settings\n2. Network\n3. Security\n";
}
