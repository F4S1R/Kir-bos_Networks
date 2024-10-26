#include "cloud_manager.h"
#include <iostream>

int main() {
    CloudManager cloudManager;
    cloudManager.initialize();
    cloudManager.deploy();
    std::cout << "Kirebos Networks Cloud version is running." << std::endl;
    return 0;
}
