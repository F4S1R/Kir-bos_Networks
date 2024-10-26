// Compiled/versions/mobile/src/MobileManager.cpp
#include "MobileManager.h"
#include <iostream>

MobileManager::MobileManager() {
    std::cout << "Mobile Manager initialized." << std::endl;
}

void MobileManager::runApp() {
    MobileUI ui;
    ui.displayMainScreen();
    std::cout << "Mobile application is fully functional." << std::endl;
}
