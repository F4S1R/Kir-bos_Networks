#include <iostream>

int main() {
    std::cout << "Installation de Kirébos Networks (Desktop)" << std::endl;

    // Configuration de l'Administrateur
    std::string email, phone;
    std::cout << "Entrez votre email: ";
    std::cin >> email;
    std::cout << "Entrez votre numéro de téléphone: ";
    std::cin >> phone;

    // Dépendances et Finalisation
    std::cout << "Installation des dépendances pour Desktop..." << std::endl;
    // Installation des dépendances
    std::cout << "Installation terminée. Notifications activées pour " << email << std::endl;

    return 0;
}
