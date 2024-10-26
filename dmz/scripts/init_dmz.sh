#!/bin/bash
# init_dmz.sh

echo "Starting DMZ initialization..."

# Configurer les règles de pare-feu
iptables -A INPUT -p tcp --dport 80 -j ACCEPT  # Accepter HTTP
iptables -A INPUT -p tcp --dport 443 -j ACCEPT # Accepter HTTPS
iptables -A INPUT -p tcp --dport 23 -j DROP    # Bloquer Telnet

echo "Firewall rules set."

# Redirection de port pour un serveur web interne
iptables -t nat -A PREROUTING -p tcp --dport 80 -j DNAT --to-destination 192.168.1.10:80

echo "Port forwarding set."

echo "DMZ setup complete."
