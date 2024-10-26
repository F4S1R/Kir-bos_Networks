// Compiled/versions/desktop/src/DesktopManager.cpp
#include "DesktopManager.h"

DesktopManager::DesktopManager() {
    // Initial setup
    std::cout << "Desktop Manager initialized." << std::endl;
}

void DesktopManager::runApp() {
    UIManager uiManager;
    AppConfig appConfig;
    SecurityFeatures security;

    std::cout << "Initializing the application..." << std::endl;
    uiManager.displayMainScreen();
    std::cout << "Loaded configuration: " << appConfig.getConfigDetail() << std::endl;
    security.encryptData();
    std::cout << "Application is running with encrypted data handling." << std::endl;
}
