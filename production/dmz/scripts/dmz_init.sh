#!/bin/bash
# Initialization script for DMZ on Raspberry Pi
echo "Initializing DMZ configuration on Raspberry Pi..."
# Commande pour appliquer les règles de pare-feu
sudo iptables -A INPUT -p tcp --dport 443 -j ACCEPT
sudo iptables -A INPUT -p tcp --dport 80 -j ACCEPT
sudo iptables -A INPUT -j DROP
echo "Firewall rules applied for DMZ."
# Démarrage du service de monitoring
echo "Starting DMZ monitoring service..."
