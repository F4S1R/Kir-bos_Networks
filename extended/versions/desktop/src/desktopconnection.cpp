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
    std::cout << "Connected to " << endpoint << std::endl;
    return connected;
}

void DesktopConnection::disconnect() {
    if (connected) {
        std::cout << "Disconnecting from " << endpoint << std::endl;
        connected = false;
    }
}

bool DesktopConnection::isConnected() const {
    return connected;
}
