#pragma once
#include <string>

class TabletConnection {
public:
    TabletConnection();
    ~TabletConnection();

    bool connect(const std::string& endpoint);
    void disconnect();
    bool isConnected() const;

private:
    std::string endpoint;
    bool connected;
};
