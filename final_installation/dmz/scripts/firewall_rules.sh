#!/bin/bash
echo "Application des règles de pare-feu pour la DMZ..."
sudo iptables -A INPUT -p tcp --dport 80 -j ACCEPT
sudo iptables -A INPUT -p tcp --dport 443 -j ACCEPT
sudo iptables -A INPUT -p tcp --dport 22 -j DROP
echo "Règles de pare-feu appliquées."
