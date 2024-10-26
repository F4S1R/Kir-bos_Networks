#include "flip_phone_manager.h"
#include <iostream>

int main() {
    FlipPhoneManager flipManager;
    flipManager.initialize();
    flipManager.deploy();
    flipManager.checkStatus();

    std::cout << "Kirebos Networks Flip Phone est opérationnel." << std::endl;
    return 0;
}
