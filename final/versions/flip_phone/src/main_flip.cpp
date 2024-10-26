#include "flip_phone_manager.h"
#include <iostream>

int main() {
    std::cout << "Starting Kirebos Networks - Flip Phone Version" << std::endl;

    FlipPhoneManager flipPhoneManager;
    flipPhoneManager.initialize();
    flipPhoneManager.deploy();
    flipPhoneManager.checkStatus();

    std::cout << "Kirebos Networks - Flip Phone version terminated." << std::endl;

    return 0;
}
