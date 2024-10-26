#pragma once

class DesktopSecurity {
public:
    DesktopSecurity();
    ~DesktopSecurity();

    void encryptData();
    void decryptData();
    bool verifyIntegrity();
};
