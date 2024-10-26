#include "mobile_manager.h"
#include <iostream>

int main() {
    MobileManager manager;
    manager.initialize();
    manager.deploy();
    std::cout << "Kirébos Networks Mobile Version - Fully installed and operational" << std::endl;
    return 0;
}
