#pragma once

class CloudSecurity {
public:
    CloudSecurity();
    ~CloudSecurity();

    void encryptData();
    void decryptData();
    bool verifyIntegrity();
};
