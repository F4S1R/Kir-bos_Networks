#!/bin/bash

echo "Installation de Kirebos Networks..."

# Crée les répertoires pour les logs et la configuration
mkdir -p /opt/kirebos_networks/logs
mkdir -p /opt/kirebos_networks/config

# Copie les fichiers de configuration par défaut
cp -r ./config /opt/kirebos_networks/

# Installation des dépendances spécifiques si nécessaire (exemple)
# apt-get install -y openssl

echo "Installation terminée. Consultez 'USAGE.md' pour les instructions d'utilisation."
