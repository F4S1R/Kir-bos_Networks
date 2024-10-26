#!/bin/bash

echo "Déploiement de Kirebos Networks Tablet..."

# Créer les répertoires nécessaires
mkdir -p /opt/kirebos/tablet/logs

# Copier les fichiers de configuration et de l'application
cp -r ./config /opt/kirebos/tablet/
cp -r ./src /opt/kirebos/tablet/
cp -r ./include /opt/kirebos/tablet/

echo "Déploiement terminé pour Kirebos Networks Tablet."
