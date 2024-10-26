#include "tablet_manager.h"

TabletManager::TabletManager() {
    connection = TabletConnection();
    security = TabletSecurity();
    logger = TabletLogger();
}

TabletManager::~TabletManager() {}

void TabletManager::initialize() {
    logger.log("Initializing tablet configuration.");
    connection.connect();
    security.configureSecurity();
}

void TabletManager::deploy() {
    logger.log("Deploying tablet services.");
    connection.deployResources();
}

void TabletManager::backup() {
    logger.log("Backing up tablet data.");
    connection.backupData();
}

void TabletManager::checkStatus() {
    logger.log("Checking status of tablet services.");
    connection.checkStatus();
}

void TabletManager::rollback() {
    logger.log("Reverting to previous configuration.");
    connection.rollbackChanges();
}
