#include "flip_phone_connection.h"
#include <iostream>

FlipPhoneConnection::FlipPhoneConnection() { /* Initialisation */ }
FlipPhoneConnection::~FlipPhoneConnection() { /* Nettoyage */ }

bool FlipPhoneConnection::connect() {
    std::cout << "Connecting to GSM Network..." << std::endl;
    return true;
}

void FlipPhoneConnection::disconnect() { /* Déconnexion du réseau GSM */ }
bool FlipPhoneConnection::isConnected() { return true; }
