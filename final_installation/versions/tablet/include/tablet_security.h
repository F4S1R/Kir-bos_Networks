#pragma once

class TabletSecurity {
public:
    TabletSecurity();
    ~TabletSecurity();

    void encryptData();
    void decryptData();
    bool verifyIntegrity();
};
