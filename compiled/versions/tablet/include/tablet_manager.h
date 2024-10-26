// Compiled/versions/tablet/include/TabletManager.h
#ifndef TABLET_MANAGER_H
#define TABLET_MANAGER_H

#include "TabletUI.h"
#include <iostream>

class TabletManager {
public:
    TabletManager() { std::cout << "Tablet Manager initialized." << std::endl; }
    void runApp() {
        TabletUI ui;
        ui.displayMainScreen();
        // Additional logic to handle other tablet-specific functionalities
        std::cout << "Tablet application is now running." << std::endl;
    }
};

#endif // TABLET_MANAGER_H
