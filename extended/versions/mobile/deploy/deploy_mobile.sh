#!/bin/bash

echo "Déploiement de Kirebos Networks Mobile..."

# Créer les répertoires nécessaires
mkdir -p /opt/kirebos/mobile/logs

# Copier les fichiers de configuration et de l'application
cp -r ./config /opt/kirebos/mobile/
cp -r ./src /opt/kirebos/mobile/
cp -r ./include /opt/kirebos/mobile/

echo "Déploiement terminé pour Kirebos Networks Mobile."
