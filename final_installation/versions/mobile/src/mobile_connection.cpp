#include "mobile_connection.h"
#include <iostream>

MobileConnection::MobileConnection() { /* Initialisation */ }
MobileConnection::~MobileConnection() { /* Nettoyage */ }

bool MobileConnection::connect() {
    std::cout << "Connecting to Mobile Network..." << std::endl;
    return true;
}

void MobileConnection::disconnect() { /* Déconnexion */ }
bool MobileConnection::isConnected() { return true; }
