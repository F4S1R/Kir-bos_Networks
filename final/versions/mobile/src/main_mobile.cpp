#include "mobile_manager.h"
#include <iostream>

int main() {
    std::cout << "Starting Kirebos Networks - Mobile Version" << std::endl;

    MobileManager mobileManager;
    mobileManager.initialize();
    mobileManager.deploy();
    mobileManager.checkStatus();

    std::cout << "Kirebos Networks - Mobile version terminated." << std::endl;

    return 0;
}
