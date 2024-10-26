#pragma once

class DesktopConnection {
public:
    DesktopConnection();
    ~DesktopConnection();

    bool connect();
    void disconnect();
    bool isConnected();
};
