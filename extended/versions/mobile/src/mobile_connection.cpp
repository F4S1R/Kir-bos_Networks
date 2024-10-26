#include "mobile_connection.h"
#include <iostream>

MobileConnection::MobileConnection() : connected(false) {}

MobileConnection::~MobileConnection() {
    if (connected) {
        disconnect();
    }
}

bool MobileConnection::connect(const std::string& endpoint) {
    this->endpoint = endpoint;
    connected = true;
    std::cout << "Connecté au service à " << endpoint << std::endl;
    return connected;
}

void MobileConnection::disconnect() {
    connected = false;
    std::cout << "Déconnexion réussie." << std::endl;
}

bool MobileConnection::isConnected() const {
    return connected;
}
