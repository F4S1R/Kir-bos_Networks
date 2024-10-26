#!/bin/bash

echo "Réinitialisation de la DMZ aux paramètres par défaut..."

# Suppression des règles de pare-feu actuelles (exemple)
# Commande simulée
# ufw reset

# Réinitialiser les paramètres de configuration par défaut
config_file="/opt/kirebos_networks/final/dmz/config_dmz.yaml"
if [ -f "$config_file" ]; then
    echo "Rechargement des paramètres par défaut depuis $config_file."
else
    echo "Fichier de configuration introuvable."
    exit 1
fi

echo "DMZ réinitialisée avec succès."
