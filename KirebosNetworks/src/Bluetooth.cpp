#include <iostream>

class BluetoothModule {
public:
    void connectToBluetooth() { std::cout << "Connexion Bluetooth..." << std::endl; }
    void disconnectBluetooth() { std::cout << "Déconnexion Bluetooth..." << std::endl; }
    void checkBluetoothStatus() { std::cout << "Statut Bluetooth vérifié." << std::endl; }
};
