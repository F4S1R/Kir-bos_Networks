#include "tablet_manager.h"
#include <iostream>

int main() {
    TabletManager manager;
    try {
        manager.initialize();
        manager.performUItests();  // Tester des éléments spécifiques de l'UI pour tablette
        manager.performPerformanceTests(); // Tester la performance de l'app sur tablette
        manager.performFunctionalityTests(); // Tester des fonctionnalités clés adaptées à la tablette

        std::cout << "Tous les tests pour la version tablette ont été exécutés avec succès." << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Échec lors des tests de la version tablette : " << e.what() << std::endl;
    }
    return 0;
}
