
    #include <iostream>
    #include "cloud_manager.h"
    #include <openssl/ssl.h>
    int main() {
        SSL_library_init();
        CloudManager manager;
        manager.manage();
        std::cout << "Kirébos Networks Cloud Version - Compiled with function calls and libraries." << std::endl;
        return 0;
    }