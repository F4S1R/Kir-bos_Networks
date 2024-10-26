// Compiled/versions/tablet/src/TabletManager.cpp
#include "TabletManager.h"

TabletManager::TabletManager() {
    std::cout << "Tablet Manager initialized." << std::endl;
}

void TabletManager::runApp() {
    TabletUI ui;
    ui.displayMainScreen();
    std::cout << "Tablet application is fully functional." << std::endl;
}
