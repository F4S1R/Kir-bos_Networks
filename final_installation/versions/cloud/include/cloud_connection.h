#pragma once

class CloudConnection {
public:
    CloudConnection();
    ~CloudConnection();

    bool connect();
    void disconnect();
    bool isConnected();
};
