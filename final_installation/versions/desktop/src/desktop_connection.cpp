#include "desktop_connection.h"
#include <iostream>

DesktopConnection::DesktopConnection() { /* Initialisation */ }
DesktopConnection::~DesktopConnection() { /* Nettoyage */ }

bool DesktopConnection::connect() {
    std::cout << "Connecting to Desktop Environment..." << std::endl;
    return true;
}

void DesktopConnection::disconnect() { /* Déconnexion */ }
bool DesktopConnection::isConnected() { return true; }
