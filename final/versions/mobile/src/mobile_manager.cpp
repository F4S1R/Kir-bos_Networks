#include "mobile_manager.h"

MobileManager::MobileManager() {
    connection = MobileConnection();
    security = MobileSecurity();
    logger = MobileLogger();
}

MobileManager::~MobileManager() {}

void MobileManager::initialize() {
    logger.log("Initializing mobile configuration.");
    connection.connect();
    security.configureSecurity();
}

void MobileManager::deploy() {
    logger.log("Deploying mobile services.");
    connection.deployResources();
}

void MobileManager::backup() {
    logger.log("Backing up mobile data.");
    connection.backupData();
}

void MobileManager::checkStatus() {
    logger.log("Checking status of mobile services.");
    connection.checkStatus();
}

void MobileManager::rollback() {
    logger.log("Reverting to previous configuration.");
    connection.rollbackChanges();
}
