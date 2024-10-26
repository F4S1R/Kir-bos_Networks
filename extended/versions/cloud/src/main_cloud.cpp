#include "cloud_manager.h"
#include <iostream>
#include <exception>

int main() {
    try {
        std::cout << "Kirebos Networks Cloud Version is starting..." << std::endl;

        // Initialisation du gestionnaire Cloud
        CloudManager cloudManager;
        cloudManager.initialize();

        // Déploiement de l'application sur le cloud
        cloudManager.deploy();

        // Effectuer une sauvegarde
        cloudManager.backup();

        // Vérification de l'état du déploiement
        cloudManager.checkStatus();

        std::cout << "All operations completed successfully." << std::endl;

    } catch (const std::exception& e) {
        std::cerr << "An error occurred: " << e.what() << std::endl;
        // En cas d'erreur, rollback du déploiement
        CloudManager cloudManager;
        cloudManager.rollback();
    }

    std::cout << "Kirebos Networks Cloud Version is shutting down." << std::endl;
    return 0;
}
