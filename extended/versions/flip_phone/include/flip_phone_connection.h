#pragma once
#include <string>

class FlipPhoneConnection {
public:
    FlipPhoneConnection();
    ~FlipPhoneConnection();

    bool connect(const std::string& endpoint);
    void disconnect();
    bool isConnected() const;

private:
    std::string endpoint;
    bool connected;
};
