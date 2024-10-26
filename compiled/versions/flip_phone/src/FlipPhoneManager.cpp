// Compiled/versions/flip_phone/src/FlipPhoneManager.cpp
#include "flip_phone_manager.h"

FlipPhoneManager::FlipPhoneManager() {
    std::cout << "Flip Phone Manager initialized." << std::endl;
}

void FlipPhoneManager::runApp() {
    UI ui;
    Settings settings;
    Security security;

    ui.displayMainMenu();
    settings.adjustVolume(5);
    security.activateSecurityMode();

    std::cout << "Flip phone application is running with all features initialized." << std::endl;
}
