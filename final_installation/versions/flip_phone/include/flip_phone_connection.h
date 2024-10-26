#pragma once

class FlipPhoneConnection {
public:
    FlipPhoneConnection();
    ~FlipPhoneConnection();

    bool connect();
    void disconnect();
    bool isConnected();
};
