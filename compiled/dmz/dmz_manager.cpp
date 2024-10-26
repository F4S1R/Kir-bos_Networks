// Compiled/DMZ/dmz_manager.cpp
#include "dmz_config.h"
#include <iostream>

class DMZManager {
public:
    DMZManager() {
        std::cout << "DMZ Manager initialized with configuration:" << std::endl;
        std::cout << "Network: " << DMZ_NETWORK << ", Security Level: " << SECURITY_LEVEL << std::endl;
    }

    void activate() {
        std::cout << "Activating DMZ..." << std::endl;
        // Additional logic to activate DMZ features
        std::cout << "DMZ is now active with enhanced security measures." << std::endl;
    }
};

int main() {
    DMZManager dmzManager;
    dmzManager.activate();
    return 0;
}
