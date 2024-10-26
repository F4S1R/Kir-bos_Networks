#include "desktop_manager.h"
#include <iostream>

int main() {
    DesktopManager desktopManager;
    desktopManager.initialize();
    desktopManager.connect();
    std::cout << "Kirebos Networks Desktop version is running." << std::endl;
    return 0;
}
