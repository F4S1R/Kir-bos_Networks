#include "tablet_manager.h"
#include <iostream>

int main() {
    TabletManager manager;
    manager.initialize();
    manager.deploy();
    std::cout << "Kirébos Networks Tablet Version - Fully installed and operational" << std::endl;
    return 0;
}
