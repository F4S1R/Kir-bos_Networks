#include <iostream>

int main() {
    // Informations d'installation
    std::cout << "Bienvenue dans l’installation de Kirébos Networks" << std::endl;
    
    // Vérification des dépendances et configuration initiale
    std::cout << "Installation des dépendances..." << std::endl;
    // Code de vérification et d'installation des dépendances ici

    // Configuration de l'administrateur
    std::string email, phone;
    std::cout << "Entrez votre email: ";
    std::cin >> email;
    std::cout << "Entrez votre numéro de téléphone: ";
    std::cin >> phone;

    // Confirmation de fin d'installation
    std::cout << "Installation terminée avec succès !" << std::endl;
    return 0;
}
