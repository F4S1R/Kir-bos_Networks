#!/bin/bash

echo "Déploiement de Kirebos Networks Desktop en cours..."

# Créer les répertoires nécessaires
mkdir -p /opt/kirebos/desktop/logs
mkdir -p /opt/kirebos/desktop/backups

# Copier les fichiers de configuration et de l'application
cp -r ./config /opt/kirebos/desktop/
cp -r ./src /opt/kirebos/desktop/
cp -r ./include /opt/kirebos/desktop/

# Définir les permissions appropriées
chmod -R 755 /opt/kirebos/desktop

echo "Déploiement de Kirebos Networks Desktop terminé avec succès."
