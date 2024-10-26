#!/bin/bash

echo "Initialisation de la DMZ..."

# Activer le pare-feu avec la politique spécifiée
echo "Activation du pare-feu..."
# Commande simulée pour l'activation du pare-feu
# ufw enable

# Charger les paramètres de configuration
config_file="/opt/kirebos_networks/final/dmz/config_dmz.yaml"

if [ -f "$config_file" ]; then
    echo "Configuration chargée depuis $config_file."
else
    echo "Fichier de configuration introuvable."
    exit 1
fi

echo "DMZ initialisée avec succès."
