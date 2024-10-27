#pragma once

class SecurityModule {
public:
    SecurityModule();
    void initialize();
    void checkPermissions();
    void encryptData();
    void decryptData();
};
