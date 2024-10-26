#include "tablet_manager.h"
#include <iostream>

int main() {
    TabletManager tabletManager;
    tabletManager.initialize();
    tabletManager.deploy();
    tabletManager.checkStatus();

    std::cout << "Kirebos Networks Tablet est opérationnel." << std::endl;
    return 0;
}
