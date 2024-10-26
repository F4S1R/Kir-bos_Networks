#pragma once
#include <string>
#include <vector>

class DesktopSecurity {
public:
    DesktopSecurity();
    ~DesktopSecurity();

    void enableSSL(bool enable);                            // Active ou désactive SSL
    void setSSLCertificate(const std::string& certPath, const std::string& keyPath);  // Définit les certificats SSL
    void addAllowedIP(const std::string& ipAddress);        // Ajoute une IP autorisée
    bool isIPAllowed(const std::string& ipAddress) const;   // Vérifie si une IP est autorisée

private:
    bool ssl_enabled;
    std::string ssl_certificate_path;
    std::string ssl_key_path;
    std::vector<std::string> allowed_ips;
};
