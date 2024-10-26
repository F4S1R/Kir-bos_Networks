#pragma once

class DesktopConnection {
public:
    DesktopConnection();
    ~DesktopConnection();

    void connect();
    void deployResources();
    void backupData();
    void checkStatus();
    void rollbackChanges();
};
