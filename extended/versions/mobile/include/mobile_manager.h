#pragma once

#include "mobile_connection.h"
#include "mobile_security.h"
#include "mobile_logger.h"

class MobileManager {
public:
    MobileManager();
    ~MobileManager();

    void initialize();
    void deploy();
    void checkStatus();

private:
    MobileConnection connection;
    MobileSecurity security;
    MobileLogger logger;
};
