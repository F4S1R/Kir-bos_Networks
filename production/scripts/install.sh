#!/bin/bash
# Installation script for Kirebos Networks in production
echo "Starting installation of Kirebos Networks..."

# Création des dossiers nécessaires
mkdir -p /opt/kirebos/logs
mkdir -p /opt/kirebos/config

# Copie des fichiers de configuration
cp config/*.yaml /opt/kirebos/config/

# Initialisation de la DMZ
bash dmz/scripts/dmz_init.sh

echo "Installation complete. Kirebos Networks is ready for use."
