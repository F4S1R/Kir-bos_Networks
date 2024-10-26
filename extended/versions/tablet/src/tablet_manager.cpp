#include "tablet_manager.h"
#include <iostream>

TabletManager::TabletManager() {
    std::cout << "Initialisation de TabletManager..." << std::endl;
    connection.connect("https://api.kirebosnetworks.com/tablet");
    logger.logInfo("TabletManager initialisé.");
}

TabletManager::~TabletManager() {
    connection.disconnect();
    logger.logInfo("TabletManager terminé.");
}

void TabletManager::initialize() {
    logger.logInfo("Paramètres Tablet initialisés.");
}

void TabletManager::deploy() {
    logger.logInfo("Déploiement Tablet en cours...");
}

void TabletManager::checkStatus() {
    logger.logInfo("Vérification de l'état Tablet.");
}
