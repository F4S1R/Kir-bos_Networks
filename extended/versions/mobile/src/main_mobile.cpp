#include "mobile_manager.h"
#include <iostream>

int main() {
    MobileManager mobileManager;
    mobileManager.initialize();
    mobileManager.deploy();
    mobileManager.checkStatus();

    std::cout << "Kirebos Networks Mobile est opérationnel." << std::endl;
    return 0;
}
