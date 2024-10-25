
    #include <iostream>
    #include "tablet_manager.h"
    #include <openssl/ssl.h>
    int main() {
        SSL_library_init();
        TabletManager manager;
        manager.manage();
        std::cout << "Kirébos Networks Tablet Version - Compiled with function calls and libraries." << std::endl;
        return 0;
    }