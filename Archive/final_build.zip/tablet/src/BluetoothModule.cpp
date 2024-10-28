#include "bluetooth_module.h"
#include <iostream>

BluetoothModule::BluetoothModule() {}

void BluetoothModule::connectToBluetooth() {
    std::cout << "Connexion Bluetooth..." << std::endl;
}

void BluetoothModule::disconnectBluetooth() {
    std::cout << "Déconnexion Bluetooth..." << std::endl;
}

void BluetoothModule::checkBluetoothStatus() {
    std::cout << "Statut Bluetooth vérifié." << std::endl;
}
