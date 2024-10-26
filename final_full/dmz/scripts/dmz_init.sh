#!/bin/bash

echo "Starting DMZ initialization..."

# Configuration par défaut pour la DMZ
python3 dmz_config.py

# Activer les paramètres de sécurité
echo "Applying security settings..."
ufw enable
ufw default deny incoming
ufw default allow outgoing

echo "DMZ initialization complete."
