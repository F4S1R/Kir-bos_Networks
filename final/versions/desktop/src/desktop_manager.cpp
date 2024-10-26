#include "desktop_manager.h"

DesktopManager::DesktopManager() {
    connection = DesktopConnection();
    security = DesktopSecurity();
    logger = DesktopLogger();
}

DesktopManager::~DesktopManager() {}

void DesktopManager::initialize() {
    logger.log("Initializing desktop configuration.");
    connection.connect();
    security.configureSecurity();
}

void DesktopManager::deploy() {
    logger.log("Deploying desktop services.");
    connection.deployResources();
}

void DesktopManager::backup() {
    logger.log("Backing up desktop data.");
    connection.backupData();
}

void DesktopManager::checkStatus() {
    logger.log("Checking status of desktop services.");
    connection.checkStatus();
}

void DesktopManager::rollback() {
    logger.log("Reverting to previous configuration.");
    connection.rollbackChanges();
}
