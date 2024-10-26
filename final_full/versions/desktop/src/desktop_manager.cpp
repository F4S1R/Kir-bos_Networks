#include "desktop_manager.h"
#include <iostream>

void DesktopManager::initialize() {
    std::cout << "Initializing desktop manager..." << std::endl;
}

void DesktopManager::connect() {
    std::cout << "Connecting to network on desktop..." << std::endl;
}

void DesktopManager::disconnect() {
    std::cout << "Disconnecting from network on desktop..." << std::endl;
}
