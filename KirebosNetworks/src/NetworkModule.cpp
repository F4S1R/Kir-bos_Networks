#include <iostream>

class NetworkModule {
public:
    void connectToNetwork() { std::cout << "Connexion au réseau..." << std::endl; }
    void disconnectFromNetwork() { std::cout << "Déconnexion du réseau..." << std::endl; }
    void checkNetworkStatus() { std::cout << "Statut du réseau vérifié." << std::endl; }
};
