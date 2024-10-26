#pragma once

class TabletSecurity {
public:
    TabletSecurity();
    ~TabletSecurity();

    void configureSecurity();
    void encryptData();
    void applyFirewallRules();
};
