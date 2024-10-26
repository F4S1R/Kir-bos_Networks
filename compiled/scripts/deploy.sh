#!/bin/bash
# deploy.sh - Script de déploiement pour Kirébos Networks

echo "Début du déploiement du projet Kirébos Networks..."

# Étape 1: Mise à jour du système et installation des dépendances
echo "Mise à jour du système et installation des dépendances..."
sudo apt-get update && sudo apt-get upgrade -y
sudo apt-get install build-essential python3 python3-pip -y

# Étape 2: Compilation des composants C++
echo "Compilation des composants C++..."
g++ -o dmz_manager Compiled/DMZ/dmz_manager.cpp
echo "Compilation terminée."

# Étape 3: Installation des dépendances Python
echo "Installation des packages Python nécessaires..."
pip3 install pyyaml

# Étape 4: Configuration de l'environnement
echo "Configuration de l'environnement..."
export DMZ_NETWORK="192.168.1.0/24"
export SECURITY_LEVEL="High"

# Étape 5: Copie des fichiers nécessaires
echo "Copie des fichiers et configurations nécessaires..."
cp Compiled/DMZ/config.yaml /etc/kirebos/

# Étape 6: Démarrage des services
echo "Démarrage des services..."
./dmz_manager
python3 Compiled/DMZ/scripts/initialize_dmz.py

echo "Déploiement du projet Kirébos Networks terminé avec succès."
