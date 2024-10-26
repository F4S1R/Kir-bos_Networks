#pragma once
#include <string>

class FlipPhoneSecurity {
public:
    FlipPhoneSecurity();
    ~FlipPhoneSecurity();

    void enableEncryption(bool enable);
    bool isEncryptionEnabled() const;

private:
    bool encryption_enabled;
};
