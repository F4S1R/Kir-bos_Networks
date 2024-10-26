#include "tablet_connection.h"
#include <iostream>

TabletConnection::TabletConnection() { /* Initialisation */ }
TabletConnection::~TabletConnection() { /* Nettoyage */ }

bool TabletConnection::connect() {
    std::cout << "Connecting to Tablet Network..." << std::endl;
    return true;
}

void TabletConnection::disconnect() { /* Déconnexion */ }
bool TabletConnection::isConnected() { return true; }
