// Compiled/versions/mobile/include/MobileManager.h
#ifndef MOBILE_MANAGER_H
#define MOBILE_MANAGER_H

#include "MobileUI.h"

class MobileManager {
public:
    MobileManager() { std::cout << "Mobile Manager initialized." << std::endl; }
    void runApp() {
        MobileUI ui;
        ui.displayMainScreen();
        // Additional code to manage app running processes
        std::cout << "Mobile app is running." << std::endl;
    }
};

#endif // MOBILE_MANAGER_H
