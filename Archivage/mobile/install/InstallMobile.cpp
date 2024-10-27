#include <iostream>

int main() {
    std::cout << "Installation de Kirébos Networks (Mobile)" << std::endl;

    std::string email, phone;
    std::cout << "Entrez votre email: ";
    std::cin >> email;
    std::cout << "Entrez votre numéro de téléphone: ";
    std::cin >> phone;

    std::cout << "Installation des dépendances pour Mobile..." << std::endl;
    std::cout << "Installation terminée. Notifications activées pour " << email << std::endl;

    return 0;
}
