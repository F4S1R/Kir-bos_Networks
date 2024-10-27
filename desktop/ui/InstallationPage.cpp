#include "../backend/HttpRequest.cpp"
#include <iostream>
#include <string>
#include <chrono>
#include <thread>

void displayProgress() {
    for (int i = 0; i <= 100; i += 10) {
        std::cout << "Progression : " << i << "%" << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
    }
}

int main() {
    std::string email;
    std::cout << "Entrez votre email : ";
    std::cin >> email;

    displayProgress();
    sendAdminNotification(email);
    std::cout << "Installation terminée et notification envoyée." << std::endl;
    return 0;
}
