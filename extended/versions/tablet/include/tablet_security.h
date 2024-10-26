#pragma once
#include <string>

class TabletSecurity {
public:
    TabletSecurity();
    ~TabletSecurity();

    void enableEncryption(bool enable);
    bool isEncryptionEnabled() const;

private:
    bool encryption_enabled;
};
