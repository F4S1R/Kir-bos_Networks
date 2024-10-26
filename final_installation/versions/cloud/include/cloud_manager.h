#pragma once

#include "cloud_connection.h"
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

private:
    CloudConnection connection;
    CloudSecurity security;
    CloudLogger logger;
};
