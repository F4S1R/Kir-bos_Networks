#include "desktop_manager.h"
#include <iostream>

DesktopManager::DesktopManager() {
    std::cout << "Initialisation de DesktopManager..." << std::endl;
    connection.connect("http://localhost/api");
    security.enableSSL(false);  // SSL est désactivé en local
    logger.logInfo("DesktopManager initialisé.");
}

DesktopManager::~DesktopManager() {
    connection.disconnect();
    logger.logInfo("DesktopManager détruit.");
}

void DesktopManager::initialize() {
    std::cout << "Initialisation des paramètres desktop..." << std::endl;
    logger.logInfo("Paramètres desktop initialisés.");
}

void DesktopManager::deploy() {
    std::cout << "Déploiement de l'application en local..." << std::endl;
    logger.logInfo("Déploiement réussi.");
}

void DesktopManager::backup() {
    std::cout << "Exécution de la sauvegarde..." << std::endl;
    logger.logInfo("Sauvegarde terminée.");
}

void DesktopManager::checkStatus() {
    std::cout << "Vérification de l'état de l'application..." << std::endl;
    logger.logInfo("État vérifié.");
}

void DesktopManager::rollback() {
    std::cout << "Annulation du déploiement..." << std::endl;
    logger.logError("Rollback terminé.");
}
