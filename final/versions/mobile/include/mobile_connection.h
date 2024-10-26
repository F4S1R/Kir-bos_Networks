#pragma once

class MobileConnection {
public:
    MobileConnection();
    ~MobileConnection();

    void connect();
    void deployResources();
    void backupData();
    void checkStatus();
    void rollbackChanges();
};
