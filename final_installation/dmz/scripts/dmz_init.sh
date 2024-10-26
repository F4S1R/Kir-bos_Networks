#!/bin/bash
echo "Initialisation de la DMZ..."
# Commandes pour configurer la DMZ
sudo iptables -A INPUT -i eth1 -j ACCEPT
sudo iptables -A FORWARD -i eth1 -o eth0 -j ACCEPT
echo "Configuration de la DMZ terminée."
