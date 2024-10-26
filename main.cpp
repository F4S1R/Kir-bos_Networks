// Kirebos_Networks/
#include <iostream>
#include "NetworkManager.h"
#include "SecurityManager.h"

int main() {
    NetworkManager netManager;
    SecurityManager secManager;
    netManager.initialize();
    secManager.initialize();
    std::cout << "System initialized and running." << std::endl;
    return 0;
}
