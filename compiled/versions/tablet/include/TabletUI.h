// Compiled/versions/tablet/include/TabletUI.h
#ifndef TABLET_UI_H
#define TABLET_UI_H

#include <iostream>

class TabletUI {
public:
    TabletUI() { std::cout << "Tablet UI initialized." << std::endl; }
    void displayMainScreen();
};

#endif // TABLET_UI_H
