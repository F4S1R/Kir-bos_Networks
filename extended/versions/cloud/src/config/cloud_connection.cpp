#include "cloud_connection.h"
#include <iostream>

CloudConnection::CloudConnection() : connected(false) {}

CloudConnection::~CloudConnection() {
    if (connected) {
        disconnect();
    }
}

bool CloudConnection::connect(const std::string& endpoint) {
    this->endpoint = endpoint;
    connected = true;  // Simuler une connexion réussie
    std::cout << "Connected to cloud service at " << endpoint << std::endl;
    return connected;
}

void CloudConnection::disconnect() {
    if (connected) {
        std::cout << "Disconnecting from " << endpoint << std::endl;
        connected = false;
    }
}

bool CloudConnection::isConnected() const {
    return connected;
}
