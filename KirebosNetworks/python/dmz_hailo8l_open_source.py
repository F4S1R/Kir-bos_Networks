
# DMZ Script with Hailo-8L AI Optimization - Open Source Version

import os

# 1. Update the system and install necessary packages
def update_and_install_packages():
    os.system("sudo apt update && sudo apt upgrade -y")
    os.system("sudo apt install iptables fail2ban nmap -y")

# 2. Configure firewall (iptables) to restrict access in the DMZ
def configure_firewall_dmz():
    os.system("sudo iptables -F")
    os.system("sudo iptables -P INPUT DROP")
    os.system("sudo iptables -A INPUT -m conntrack --ctstate ESTABLISHED,RELATED -j ACCEPT")
    os.system("sudo iptables -A INPUT -p tcp --dport 22 -j ACCEPT")  # SSH
    os.system("sudo iptables -A INPUT -p tcp --dport 80 -j ACCEPT")  # HTTP
    os.system("sudo sh -c 'iptables-save > /etc/iptables/rules.v4'")

# 3. Start fail2ban for security
def start_fail2ban():
    os.system("sudo systemctl start fail2ban")

# Main function
if __name__ == "__main__":
    update_and_install_packages()
    configure_firewall_dmz()
    start_fail2ban()
