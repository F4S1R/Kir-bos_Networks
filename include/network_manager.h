#pragma once

class NetworkManager {
public:
    NetworkManager();
    ~NetworkManager();

    void connect();
    void disconnect();
    void monitorNetwork();
    void enableFirewall();
    void disableFirewall();
private:
    bool isConnected;
};
