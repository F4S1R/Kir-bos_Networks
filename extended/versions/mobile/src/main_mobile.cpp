
    #include <iostream>
    #include "mobile_manager.h"
    #include <openssl/ssl.h>
    int main() {
        SSL_library_init();
        MobileManager manager;
        manager.manage();
        std::cout << "Kirébos Networks Mobile Version - Compiled with function calls and libraries." << std::endl;
        return 0;
    }