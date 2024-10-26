#!/bin/bash

echo "Déploiement de Kirebos Networks..."

# Charger la configuration
CONFIG_FILE="/opt/kirebos_networks/config/config.yaml"
if [ ! -f "$CONFIG_FILE" ]; then
    echo "Erreur : fichier de configuration introuvable."
    exit 1
fi

# Déployer les règles de pare-feu
echo "Configuration des règles de pare-feu..."
sudo ufw allow from 192.168.1.0/24  # Exemple d'autorisation pour un sous-réseau
sudo ufw reload

# Lancer les services réseau (exemple)
echo "Lancement des services réseau..."
# service networking restart  # Simulé

echo "Déploiement terminé."
