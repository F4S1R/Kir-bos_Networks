#!/bin/bash

echo "Mise à jour de Kirebos Networks..."

# Aller dans le dossier du projet
PROJECT_DIR="/path/to/Kirebos_Networks"
cd "$PROJECT_DIR" || { echo "Erreur : impossible de trouver le dossier du projet."; exit 1; }

# Récupérer les dernières modifications depuis GitHub
echo "Récupération des dernières mises à jour..."
git pull origin main

# Réinstallation des dépendances (si nécessaire)
echo "Mise à jour des dépendances..."
sudo apt update && sudo apt install -y python3 python3-pip

echo "Mise à jour terminée avec succès."
