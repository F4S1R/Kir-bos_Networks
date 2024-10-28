#include "network_module.h"
#include <iostream>

NetworkModule::NetworkModule() {}

void NetworkModule::initialize() {
    std::cout << "Initialisation du module réseau..." << std::endl;
}

void NetworkModule::connectToNetwork() {
    std::cout << "Connexion au réseau..." << std::endl;
}

void NetworkModule::disconnectFromNetwork() {
    std::cout << "Déconnexion du réseau..." << std::endl;
}

void NetworkModule::checkNetworkStatus() {
    std::cout << "Vérification de l'état du réseau..." << std::endl;
}
