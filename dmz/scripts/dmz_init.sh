#!/bin/bash
echo "Initialisation de la DMZ..."

# Configuration des règles de pare-feu
iptables -A INPUT -p tcp --dport 80 -j ACCEPT  # Autoriser HTTP
iptables -A INPUT -p tcp --dport 443 -j ACCEPT # Autoriser HTTPS
iptables -A INPUT -p tcp --dport 23 -j DROP    # Bloquer Telnet

echo "Règles de pare-feu configurées."
