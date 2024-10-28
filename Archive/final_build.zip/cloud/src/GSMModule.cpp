#include "gsm_module.h"
#include <iostream>

GSMModule::GSMModule() {}

void GSMModule::connectToGSM() {
    std::cout << "Connexion GSM..." << std::endl;
}

void GSMModule::disconnectGSM() {
    std::cout << "Déconnexion GSM..." << std::endl;
}

void GSMModule::checkGSMStatus() {
    std::cout << "Statut GSM vérifié." << std::endl;
}
