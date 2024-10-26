#include "cloud_connection.h"
#include <iostream>

CloudConnection::CloudConnection() { /* Initialisation */ }
CloudConnection::~CloudConnection() { /* Nettoyage */ }

bool CloudConnection::connect() {
    std::cout << "Connecting to Cloud..." << std::endl;
    return true;
}

void CloudConnection::disconnect() { /* Déconnexion du Cloud */ }
bool CloudConnection::isConnected() { return true; }
