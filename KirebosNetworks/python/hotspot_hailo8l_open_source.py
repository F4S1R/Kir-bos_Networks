
# Hotspot Script with Hailo-8L AI Optimization - Open Source Version

import os

# 1. Update the system and install necessary packages
def update_and_install_packages():
    os.system("sudo apt update && sudo apt upgrade -y")
    os.system("sudo apt install hostapd dnsmasq iptables bluez fail2ban arpwatch nmap -y")

# 2. Configure WiFi Hotspot with hostapd
def configure_hostapd():
    with open('/etc/hostapd/hostapd.conf', 'w') as hostapd_conf:
        hostapd_conf.write('''
interface=wlan0
driver=nl80211
ssid=Hotspot_Secure
hw_mode=g
channel=6
wpa=2
wpa_passphrase=StrongPassword123
''')
    os.system("sudo systemctl restart hostapd")

# 3. Configure firewall (iptables) to block unauthorized connections
def configure_firewall():
    os.system("sudo iptables -F")
    os.system("sudo iptables -P INPUT DROP")
    os.system("sudo iptables -A INPUT -m conntrack --ctstate ESTABLISHED,RELATED -j ACCEPT")
    os.system("sudo iptables -A INPUT -p tcp --dport 22 -j ACCEPT")  # SSH
    os.system("sudo iptables -A INPUT -p tcp --dport 80 -j ACCEPT")  # HTTP
    os.system("sudo sh -c 'iptables-save > /etc/iptables/rules.v4'")

# 4. Start fail2ban and arpwatch for network monitoring
def start_security_services():
    os.system("sudo systemctl start fail2ban")
    os.system("sudo systemctl start arpwatch")

# Main function
if __name__ == "__main__":
    update_and_install_packages()
    configure_hostapd()
    configure_firewall()
    start_security_services()
