#pragma once

class FlipPhoneConnection {
public:
    FlipPhoneConnection();
    ~FlipPhoneConnection();

    void connect();
    void deployResources();
    void backupData();
    void checkStatus();
    void rollbackChanges();
};
