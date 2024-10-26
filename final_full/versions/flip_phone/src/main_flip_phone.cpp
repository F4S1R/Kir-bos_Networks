#include "flip_phone_manager.h"
#include <iostream>

int main() {
    FlipPhoneManager flipPhoneManager;
    flipPhoneManager.initialize();
    flipPhoneManager.connect();
    std::cout << "Kirebos Networks Flip Phone version is running." << std::endl;
    return 0;
}
