#!/bin/bash

echo "Désinstallation de Kirébos Networks..."

# Supprimer le dossier d'installation
sudo rm -rf /opt/Kirebos_Networks

# Supprimer le raccourci du bureau
rm ~/Bureau/Kirebos_Networks.desktop

echo "Désinstallation terminée. Kirébos Networks a été supprimé de votre système."
