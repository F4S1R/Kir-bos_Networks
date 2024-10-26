#pragma once

class CloudConnection {
public:
    CloudConnection();
    ~CloudConnection();

    void connect();
    void deployResources();
    void backupData();
    void checkStatus();
    void rollbackChanges();
};
