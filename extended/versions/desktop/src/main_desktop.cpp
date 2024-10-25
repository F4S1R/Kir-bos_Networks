
    #include <iostream>
    #include "desktop_manager.h"
    #include <openssl/ssl.h> // Example of OpenSSL inclusion
    int main() {
        SSL_library_init(); // Initialize OpenSSL
        DesktopManager manager;
        manager.manage();
        std::cout << "Kirébos Networks Desktop Version - Compiled with function calls and libraries." << std::endl;
        return 0;
    }