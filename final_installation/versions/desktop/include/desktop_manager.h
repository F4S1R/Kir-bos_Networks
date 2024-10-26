#pragma once

#include "desktop_connection.h"
#include "desktop_security.h"
#include "desktop_logger.h"

class DesktopManager {
public:
    DesktopManager();
    ~DesktopManager();

    void initialize();
    void deploy();
    void backup();
    void checkStatus();
    void rollback();

private:
    DesktopConnection connection;
    DesktopSecurity security;
    DesktopLogger logger;
};
