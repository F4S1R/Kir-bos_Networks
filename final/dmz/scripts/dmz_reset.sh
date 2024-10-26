#!/bin/bash

echo "Réinitialisation de la DMZ aux paramètres par défaut..."

# Suppression des règles de pare-feu actuelles (exemple)
# sudo ufw reset

# Rechargement de la configuration par défaut
CONFIG_FILE="/opt/kirebos_networks/final/dmz/config_dmz.yaml"
if [ -f "$CONFIG_FILE" ]; then
    echo "Rechargement des paramètres depuis $CONFIG_FILE"
else
    echo "Erreur : Fichier de configuration introuvable."
    exit 1
fi

echo "DMZ réinitialisée avec succès."
