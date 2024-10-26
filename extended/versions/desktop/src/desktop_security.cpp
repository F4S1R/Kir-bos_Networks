#include "desktop_security.h"
#include <iostream>

DesktopSecurity::DesktopSecurity() : ssl_enabled(false) {}

DesktopSecurity::~DesktopSecurity() {}

void DesktopSecurity::enableSSL(bool enable) {
    ssl_enabled = enable;
    std::cout << (enable ? "SSL enabled." : "SSL disabled.") << std::endl;
}

void DesktopSecurity::setSSLCertificate(const std::string& certPath, const std::string& keyPath) {
    ssl_certificate_path = certPath;
    ssl_key_path = keyPath;
    std::cout << "SSL Certificate and Key set." << std::endl;
}

void DesktopSecurity::addAllowedIP(const std::string& ipAddress) {
    allowed_ips.push_back(ipAddress);
    std::cout << "Added allowed IP: " << ipAddress << std::endl;
}

bool DesktopSecurity::isIPAllowed(const std::string& ipAddress) const {
    return std::find(allowed_ips.begin(), allowed_ips.end(), ipAddress) != allowed_ips.end();
}
