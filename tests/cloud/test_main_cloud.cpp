#include "cloud_manager.h"
#include <iostream>
#include <cassert>

// Tests pour la fonctionnalité CloudManager
void test_cloud_initialization() {
    CloudManager cloudManager;
    cloudManager.initialize();
    assert(cloudManager.isInitialized() && "Cloud should be initialized");
    std::cout << "Initialization test passed." << std::endl;
}

void test_cloud_deployment() {
    CloudManager cloudManager;
    cloudManager.deploy();
    assert(cloudManager.isDeployed() && "Cloud should be deployed");
    std::cout << "Deployment test passed." << std::endl;
}

void test_cloud_backup() {
    CloudManager cloudManager;
    cloudManager.backup();
    assert(cloudManager.hasBackup() && "Backup should exist");
    std::cout << "Backup test passed." << std::endl;
}

void test_cloud_status_check() {
    CloudManager cloudManager;
    cloudManager.checkStatus();
    assert(cloudManager.getStatus() && "Status should be OK");
    std::cout << "Status check test passed." << std::endl;
}

void test_cloud_rollback() {
    CloudManager cloudManager;
    cloudManager.rollback();
    assert(cloudManager.isRolledBack() && "Rollback should be successful");
    std::cout << "Rollback test passed." << std::endl;
}

int main() {
    test_cloud_initialization();
    test_cloud_deployment();
    test_cloud_backup();
    test_cloud_status_check();
    test_cloud_rollback();
    std::cout << "All cloud tests passed successfully." << std::endl;
    return 0;
}
