#pragma once
#include <string>
#include <vector>

class CloudSecurity {
public:
    CloudSecurity();
    ~CloudSecurity();

    void enableSSL(bool enable);                            // Active SSL
    void setSSLCertificate(const std::string& certPath, const std::string& keyPath);  // Définit les chemins des certificats
    void addAllowedIP(const std::string& ipAddress);        // Ajoute une IP autorisée
    bool isIPAllowed(const std::string& ipAddress) const;   // Vérifie si l'IP est autorisée

private:
    bool ssl_enabled;
    std::string ssl_certificate_path;
    std::string ssl_key_path;
    std::vector<std::string> allowed_ips;
};
