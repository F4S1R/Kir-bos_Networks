#include "desktop_manager.h"
#include <iostream>

int main() {
    std::cout << "Starting Kirebos Networks - Desktop Version" << std::endl;

    DesktopManager desktopManager;
    desktopManager.initialize();
    desktopManager.deploy();
    desktopManager.checkStatus();

    std::cout << "Kirebos Networks - Desktop version terminated." << std::endl;

    return 0;
}
