// Compiled/versions/flip_phone/include/flip_phone_manager.h
#ifndef FLIP_PHONE_MANAGER_H
#define FLIP_PHONE_MANAGER_H

#include "UI.h"
#include "Settings.h"
#include "Security.h"

class FlipPhoneManager {
public:
    FlipPhoneManager() {
        // Initial setup could go here
        std::cout << "Flip Phone Manager initialized." << std::endl;
    }

    void runApp() {
        UI ui;
        Settings settings;
        Security security;

        ui.displayMainMenu();
        settings.adjustVolume(5);
        security.activateSecurityMode();

        std::cout << "Flip phone application is running with all features initialized." << std::endl;
    }
};

#endif // FLIP_PHONE_MANAGER_H
