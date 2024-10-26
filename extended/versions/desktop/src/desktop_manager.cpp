#include "desktop_manager.h"
#include <iostream>

DesktopManager::DesktopManager() {
    std::cout << "Initializing DesktopManager..." << std::endl;
    connection.connect("http://localhost/api");
    security.enableSSL(false);  // SSL peut être désactivé en local
    logger.logInfo("DesktopManager initialized.");
}

DesktopManager::~DesktopManager() {
    connection.disconnect();
    logger.logInfo("DesktopManager destroyed.");
}

void DesktopManager::initialize() {
    std::cout << "DesktopManager: Initializing desktop settings..." << std::endl;
    logger.logInfo("Desktop settings initialized.");
}

void DesktopManager::deploy() {
    std::cout << "DesktopManager: Deploying application locally..." << std::endl;
    logger.logInfo("Deployment successful.");
}

void DesktopManager::backup() {
    std::cout << "DesktopManager: Running backup..." << std::endl;
    logger.logInfo("Backup completed.");
}

void DesktopManager::checkStatus() {
    std::cout << "DesktopManager: Checking application status..." << std::endl;
    logger.logInfo("Status checked.");
}

void DesktopManager::rollback() {
    std::cout << "DesktopManager: Rolling back..." << std::endl;
    logger.logError("Rollback completed.");
}
