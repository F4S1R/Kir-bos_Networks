// Compiled/versions/desktop/include/desktop_manager.h
#ifndef DESKTOP_MANAGER_H
#define DESKTOP_MANAGER_H

#include "UIManager.h"
#include "AppConfig.h"
#include "SecurityFeatures.h"

class DesktopManager {
public:
    DesktopManager() {
        // Initial setup could go here
        std::cout << "Desktop Manager initialized." << std::endl;
    }

    void runApp() {
        // Run the main application logic
        UIManager uiManager;
        AppConfig appConfig;
        SecurityFeatures security;

        uiManager.displayMainScreen();
        std::string configDetails = appConfig.getConfigDetail();
        security.encryptData();

        std::cout << "Running the desktop application with settings: " << configDetails << std::endl;
    }
};

#endif // DESKTOP_MANAGER_H
