#include "internet_module.h"
#include <iostream>

InternetModule::InternetModule() {}

void InternetModule::connectToInternet() {
    std::cout << "Connexion à Internet..." << std::endl;
}

void InternetModule::disconnectInternet() {
    std::cout << "Déconnexion d'Internet..." << std::endl;
}

void InternetModule::checkInternetStatus() {
    std::cout << "Statut d'Internet vérifié." << std::endl;
}
