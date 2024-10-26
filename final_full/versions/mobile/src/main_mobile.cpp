#include "mobile_manager.h"
#include <iostream>

int main() {
    MobileManager mobileManager;
    mobileManager.initialize();
    mobileManager.connect();
    std::cout << "Kirebos Networks Mobile version is running." << std::endl;
    return 0;
}
