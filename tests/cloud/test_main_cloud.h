#include "cloud_manager.h"
#include <cassert>

void test_cloud_functionality() {
    // Instanciation du gestionnaire de cloud
    CloudManager cloudManager;

    // Simuler l'initialisation du cloud
    cloudManager.initialize();
    assert(cloudManager.isInitialized() == true && "Cloud should be initialized");

    // Tester la fonctionnalité de déploiement
    cloudManager.deploy();
    assert(cloudManager.isDeployed() == true && "Cloud should be deployed");

    // Tester la fonctionnalité de sauvegarde
    cloudManager.backup();
    assert(cloudManager.hasBackup() == true && "Backup should be available");

    // Tester la fonction de vérification de l'état
    cloudManager.checkStatus();
    assert(cloudManager.getStatus() == true && "Status should be OK");

    // Tester la fonction de rollback
    cloudManager.rollback();
    assert(cloudManager.isRolledBack() == true && "Rollback should be successful");
}

int main() {
    test_cloud_functionality();
    std::cout << "All cloud tests passed successfully." << std::endl;
    return 0;
}
