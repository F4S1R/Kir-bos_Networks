#pragma once

class FlipPhoneSecurity {
public:
    FlipPhoneSecurity();
    ~FlipPhoneSecurity();

    void encryptData();
    void decryptData();
    bool verifyIntegrity();
};
