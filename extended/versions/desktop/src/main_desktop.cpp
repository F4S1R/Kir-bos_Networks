#include "desktop_manager.h"
#include <iostream>
#include <exception>

int main() {
    try {
        std::cout << "Lancement de Kirebos Networks Desktop..." << std::endl;

        // Initialisation du gestionnaire Desktop
        DesktopManager desktopManager;
        desktopManager.initialize();

        // Déploiement de l'application en local
        desktopManager.deploy();

        // Sauvegarde des données
        desktopManager.backup();

        // Vérification de l'état de l'application
        desktopManager.checkStatus();

        std::cout << "Toutes les opérations ont été réalisées avec succès." << std::endl;

    } catch (const std::exception& e) {
        std::cerr << "Une erreur est survenue : " << e.what() << std::endl;
        DesktopManager desktopManager;
        desktopManager.rollback();
    }

    std::cout << "Arrêt de Kirebos Networks Desktop." << std::endl;
    return 0;
}
