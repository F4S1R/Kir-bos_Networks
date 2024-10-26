#pragma once

class SecurityModule {
public:
    SecurityModule();
    ~SecurityModule();

    bool authenticateUser(const std::string& username, const std::string& password);
    void encryptData(std::string& data);
    void decryptData(std::string& data);
    void enableTwoFactorAuth();
    void disableTwoFactorAuth();
private:
    bool twoFactorEnabled;
};
