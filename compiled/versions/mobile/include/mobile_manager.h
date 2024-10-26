// Compiled/versions/mobile/include/MobileManager.h
#ifndef MOBILE_MANAGER_H
#define MOBILE_MANAGER_H

#include "MobileUI.h"
#include "Config.h"

class MobileManager {
public:
    MobileManager();
    void runApp();

private:
    MobileUI ui;
};

#endif // MOBILE_MANAGER_H
