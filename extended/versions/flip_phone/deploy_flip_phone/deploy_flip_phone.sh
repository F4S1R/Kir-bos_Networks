#!/bin/bash

echo "Déploiement de Kirebos Networks Flip Phone..."

# Créer les répertoires nécessaires
mkdir -p /opt/kirebos/flip_phone/logs

# Copier les fichiers de configuration et de l'application
cp -r ./config /opt/kirebos/flip_phone/
cp -r ./src /opt/kirebos/flip_phone/
cp -r ./include /opt/kirebos/flip_phone/

echo "Déploiement de Kirebos Networks Flip Phone terminé."
