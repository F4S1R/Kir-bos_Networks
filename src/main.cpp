#include <iostream>
#include "network_manager.h"
#include "security_manager.h"
#include "dmz_manager.h"

int main() {
    std::cout << "Initializing Kirebos Networks..." << std::endl;
    NetworkManager networkManager;
    SecurityManager securityManager;
    DMZManager dmzManager;

    networkManager.initialize();
    securityManager.setup();
    dmzManager.activate();

    std::cout << "Kirebos Networks successfully started." << std::endl;
    return 0;
}
