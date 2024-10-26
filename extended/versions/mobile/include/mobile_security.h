#pragma once
#include <string>

class MobileSecurity {
public:
    MobileSecurity();
    ~MobileSecurity();

    void enableEncryption(bool enable);
    bool isEncryptionEnabled() const;

private:
    bool encryption_enabled;
};
