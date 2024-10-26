#pragma once

class MobileConnection {
public:
    MobileConnection();
    ~MobileConnection();

    bool connect();
    void disconnect();
    bool isConnected();
};
