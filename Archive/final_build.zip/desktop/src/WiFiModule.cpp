#include "wifi_module.h"
#include <iostream>

WiFiModule::WiFiModule() {}

void WiFiModule::connectToWiFi() {
    std::cout << "Connexion WiFi..." << std::endl;
}

void WiFiModule::disconnectWiFi() {
    std::cout << "Déconnexion WiFi..." << std::endl;
}

void WiFiModule::checkWiFiStatus() {
    std::cout << "Statut WiFi vérifié." << std::endl;
}
