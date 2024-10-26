#include "tablet_connection.h"
#include <iostream>

TabletConnection::TabletConnection() : connected(false) {}

TabletConnection::~TabletConnection() {
    if (connected) {
        disconnect();
    }
}

bool TabletConnection::connect(const std::string& endpoint) {
    this->endpoint = endpoint;
    connected = true;
    std::cout << "Connecté au service à " << endpoint << std::endl;
    return connected;
}

void TabletConnection::disconnect() {
    connected = false;
    std::cout << "Déconnexion réussie." << std::endl;
}

bool TabletConnection::isConnected() const {
    return connected;
}
