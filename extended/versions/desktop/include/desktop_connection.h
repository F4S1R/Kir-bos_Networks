#pragma once
#include <string>

class DesktopConnection {
public:
    DesktopConnection();
    ~DesktopConnection();

    bool connect(const std::string& endpoint);  // Se connecte au service local
    void disconnect();                          // Déconnecte du service
    bool isConnected() const;                   // Vérifie si la connexion est active

private:
    std::string endpoint;
    bool connected;
};
