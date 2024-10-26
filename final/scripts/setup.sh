#!/bin/bash

echo "Initialisation de Kirebos Networks..."

# Mise à jour du système
echo "Mise à jour du système..."
sudo apt update && sudo apt upgrade -y

# Installation des dépendances
echo "Installation des dépendances..."
sudo apt install -y python3 python3-pip ufw openssl

# Configuration du pare-feu de base
echo "Configuration du pare-feu..."
sudo ufw allow 22     # SSH
sudo ufw allow 80     # HTTP
sudo ufw allow 443    # HTTPS
sudo ufw enable

# Création des dossiers nécessaires
echo "Création des dossiers..."
mkdir -p /opt/kirebos_networks/logs
mkdir -p /opt/kirebos_networks/config

echo "Installation terminée avec succès."
