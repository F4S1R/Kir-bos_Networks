#pragma once

class MobileSecurity {
public:
    MobileSecurity();
    ~MobileSecurity();

    void encryptData();
    void decryptData();
    bool verifyIntegrity();
};
