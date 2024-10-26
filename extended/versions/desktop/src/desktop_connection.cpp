#include "desktop_connection.h"
#include <iostream>

DesktopConnection::DesktopConnection() : connected(false) {}

DesktopConnection::~DesktopConnection() {
    if (connected) {
        disconnect();
    }
}

bool DesktopConnection::connect(const std::string& endpoint) {
    this->endpoint = endpoint;
    connected = true;
    std::cout << "Connecté au service à " << endpoint << std::endl;
    return connected;
}

void DesktopConnection::disconnect() {
    if (connected) {
        std::cout << "Déconnexion de " << endpoint << std::endl;
        connected = false;
    }
}

bool DesktopConnection::isConnected() const {
    return connected;
}
