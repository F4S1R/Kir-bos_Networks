#pragma once

class TabletConnection {
public:
    TabletConnection();
    ~TabletConnection();

    bool connect();
    void disconnect();
    bool isConnected();
};
