#include "mobile_manager.h"
#include <iostream>

void MobileManager::initialize() {
    std::cout << "Initializing mobile manager..." << std::endl;
}

void MobileManager::connect() {
    std::cout << "Connecting to Wi-Fi network on mobile..." << std::endl;
}

void MobileManager::disconnect() {
    std::cout << "Disconnecting from Wi-Fi network on mobile..." << std::endl;
}
