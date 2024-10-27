#include <iostream>
#include "desktop_manager.h"

int main() {
    DesktopManager manager;
    manager.initialize();
    std::cout << "Kirebos Networks Desktop Version - Successfully deployed and running" << std::endl;
    return 0;
}
