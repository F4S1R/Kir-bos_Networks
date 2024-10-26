#pragma once

#include "tablet_connection.h"
#include "tablet_security.h"
#include "tablet_logger.h"

class TabletManager {
public:
    TabletManager();
    ~TabletManager();

    void initialize();
    void deploy();
    void checkStatus();

private:
    TabletConnection connection;
    TabletSecurity security;
    TabletLogger logger;
};
