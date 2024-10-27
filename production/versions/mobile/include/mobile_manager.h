#pragma once

#include "mobile_security.h"
#include "mobile_logger.h"

class MobileManager {
public:
    MobileManager();
    ~MobileManager();

    void initialize();
    void deploy();
    void backup();
    void checkStatus();
    void rollback();
};
