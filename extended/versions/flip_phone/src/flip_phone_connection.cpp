#include "flip_phone_connection.h"
#include <iostream>

FlipPhoneConnection::FlipPhoneConnection() : connected(false) {}

FlipPhoneConnection::~FlipPhoneConnection() {
    if (connected) {
        disconnect();
    }
}

bool FlipPhoneConnection::connect(const std::string& endpoint) {
    this->endpoint = endpoint;
    connected = true;
    std::cout << "Connecté au service à " << endpoint << std::endl;
    return connected;
}

void FlipPhoneConnection::disconnect() {
    connected = false;
    std::cout << "Déconnexion réussie." << std::endl;
}

bool FlipPhoneConnection::isConnected() const {
    return connected;
}
