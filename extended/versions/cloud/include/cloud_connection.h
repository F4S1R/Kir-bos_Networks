#pragma once
#include <string>

class CloudConnection {
public:
    CloudConnection();
    ~CloudConnection();

    bool connect(const std::string& endpoint);  // Se connecte au service cloud
    void disconnect();                          // Déconnecte du service cloud
    bool isConnected() const;                   // Vérifie l'état de la connexion

private:
    std::string endpoint;
    bool connected;
};
