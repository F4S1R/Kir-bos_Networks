#include "tablet_manager.h"
#include <iostream>

int main() {
    TabletManager tabletManager;
    tabletManager.initialize();
    tabletManager.connect();
    std::cout << "Kirebos Networks Tablet version is running." << std::endl;
    return 0;
}
