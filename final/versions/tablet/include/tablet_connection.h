#pragma once

class TabletConnection {
public:
    TabletConnection();
    ~TabletConnection();

    void connect();
    void deployResources();
    void backupData();
    void checkStatus();
    void rollbackChanges();
};
