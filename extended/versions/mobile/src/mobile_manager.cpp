#include "mobile_manager.h"
#include <iostream>

MobileManager::MobileManager() {
    std::cout << "Initialisation de MobileManager..." << std::endl;
    connection.connect("https://api.kirebosnetworks.com/mobile");
    logger.logInfo("MobileManager initialisé.");
}

MobileManager::~MobileManager() {
    connection.disconnect();
    logger.logInfo("MobileManager terminé.");
}

void MobileManager::initialize() {
    logger.logInfo("Paramètres Mobile initialisés.");
}

void MobileManager::deploy() {
    logger.logInfo("Déploiement Mobile en cours...");
}

void MobileManager::checkStatus() {
    logger.logInfo("Vérification de l'état Mobile.");
}
