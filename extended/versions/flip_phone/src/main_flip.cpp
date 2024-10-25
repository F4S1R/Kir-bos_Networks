
    #include <iostream>
    #include "flip_phone_manager.h"
    #include <openssl/ssl.h>
    int main() {
        SSL_library_init();
        FlipPhoneManager manager;
        manager.manage();
        std::cout << "Kirébos Networks Flip Phone Version - Compiled with function calls and libraries." << std::endl;
        return 0;
    }