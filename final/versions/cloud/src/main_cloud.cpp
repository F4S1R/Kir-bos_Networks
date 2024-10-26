#include "cloud_manager.h"
#include <iostream>

int main() {
    std::cout << "Démarrage de Kirebos Networks - Version Cloud" << std::endl;

    CloudManager cloudManager;
    cloudManager.initialize();
    cloudManager.deploy();
    cloudManager.checkStatus();

    std::cout << "Kirebos Networks - Cloud terminé." << std::endl;

    return 0;
}
