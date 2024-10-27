#include "desktop_manager.h"
#include <iostream>
#include <cassert>

// Test pour l'initialisation du DesktopManager
void test_desktop_initialization() {
    DesktopManager manager;
    manager.initialize();
    assert(manager.isInitialized() && "Desktop should be initialized");
    std::cout << "Desktop initialization test passed." << std::endl;
}

// Test pour la gestion des fenêtres
void test_window_management() {
    DesktopManager manager;
    manager.openWindow();
    assert(manager.windowCount() == 1 && "Window should be opened");
    manager.closeWindow();
    assert(manager.windowCount() == 0 && "Window should be closed");
    std::cout << "Window management test passed." << std::endl;
}

// Test pour les interactions utilisateur
void test_user_interactions() {
    DesktopManager manager;
    manager.simulateUserInput();
    assert(manager.hasUserInput() && "User input should be simulated");
    std::cout << "User interaction test passed." << std::endl;
}

// Test pour la mise à jour du système
void test_system_updates() {
    DesktopManager manager;
    manager.checkForUpdates();
    assert(manager.hasUpdates() && "System should find updates");
    std::cout << "System update test passed." << std::endl;
}

int main() {
    test_desktop_initialization();
    test_window_management();
    test_user_interactions();
    test_system_updates();
    std::cout << "All desktop tests passed successfully." << std::endl;
    return 0;
}
