#pragma once

#include "flip_phone_connection.h"
#include "flip_phone_security.h"
#include "flip_phone_logger.h"

class FlipPhoneManager {
public:
    FlipPhoneManager();
    ~FlipPhoneManager();

    void initialize();
    void deploy();
    void backup();
    void checkStatus();
    void rollback();

private:
    FlipPhoneConnection connection;
    FlipPhoneSecurity security;
    FlipPhoneLogger logger;
};
