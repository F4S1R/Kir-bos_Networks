#include "tablet_manager.h"
#include <iostream>

int main() {
    std::cout << "Starting Kirebos Networks - Tablet Version" << std::endl;

    TabletManager tabletManager;
    tabletManager.initialize();
    tabletManager.deploy();
    tabletManager.checkStatus();

    std::cout << "Kirebos Networks - Tablet version terminated." << std::endl;

    return 0;
}
