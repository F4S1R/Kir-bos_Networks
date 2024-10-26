#include "flip_phone_manager.h"
#include <iostream>

FlipPhoneManager::FlipPhoneManager() {
    std::cout << "Initialisation de FlipPhoneManager..." << std::endl;
    connection.connect("http://localhost/api");
    logger.logInfo("FlipPhoneManager initialisé.");
}

FlipPhoneManager::~FlipPhoneManager() {
    connection.disconnect();
    logger.logInfo("FlipPhoneManager terminé.");
}

void FlipPhoneManager::initialize() {
    logger.logInfo("Paramètres Flip Phone initialisés.");
}

void FlipPhoneManager::deploy() {
    logger.logInfo("Déploiement Flip Phone en cours...");
}

void FlipPhoneManager::checkStatus() {
    logger.logInfo("Vérification de l'état Flip Phone.");
}
