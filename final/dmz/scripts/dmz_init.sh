#!/bin/bash

echo "Initialisation de la DMZ..."

# Chemin vers le fichier de configuration DMZ
CONFIG_FILE="/opt/kirebos_networks/final/dmz/config_dmz.yaml"

# Vérifie si le fichier de configuration existe
if [ ! -f "$CONFIG_FILE" ]; then
    echo "Erreur : Le fichier de configuration DMZ est introuvable."
    exit 1
fi

# Charger les paramètres de configuration
echo "Chargement de la configuration DMZ depuis $CONFIG_FILE"
firewall_enabled=$(grep 'firewall.enabled' "$CONFIG_FILE" | awk '{print $2}')
allowed_ips=$(grep 'allowed_ips' "$CONFIG_FILE" | sed 's/allowed_ips: //' | tr -d '[],')

# Activer le pare-feu si nécessaire
if [ "$firewall_enabled" = "true" ]; then
    echo "Activation du pare-feu..."
    # Exemple de commande pour activer le pare-feu
    # sudo ufw enable

    # Ajout des IPs autorisées
    for ip in $allowed_ips; do
        echo "Ajout de l'IP autorisée : $ip"
        # Exemple de commande pour autoriser une IP
        # sudo ufw allow from "$ip"
    done
fi

echo "Initialisation de la DMZ terminée avec succès."
