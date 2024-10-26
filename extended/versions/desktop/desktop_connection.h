#pragma once
#include <string>

class DesktopConnection {
public:
    DesktopConnection();
    ~DesktopConnection();

    bool connect(const std::string& endpoint);  // Se connecte au service local ou réseau
    void disconnect();                          // Déconnecte
    bool isConnected() const;                   // Vérifie l'état de la connexion

private:
    std::string endpoint;
    bool connected;
};
