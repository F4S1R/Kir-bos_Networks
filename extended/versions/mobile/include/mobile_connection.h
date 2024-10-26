#pragma once
#include <string>

class MobileConnection {
public:
    MobileConnection();
    ~MobileConnection();

    bool connect(const std::string& endpoint);
    void disconnect();
    bool isConnected() const;

private:
    std::string endpoint;
    bool connected;
};
