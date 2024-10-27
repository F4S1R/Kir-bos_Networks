#pragma once

#include "cloud_security.h"
#include "cloud_logger.h"

class CloudManager {
public:
    CloudManager();
    ~CloudManager();

    void initialize();
    void deploy();
    void backup();
    void checkStatus();
    void rollback();
};
