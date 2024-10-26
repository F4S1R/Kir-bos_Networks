#!/bin/bash

echo "Vérification post-installation de Kirebos Networks..."

# Vérifie si le dossier de configuration existe
if [ -d "/opt/kirebos_networks/config" ]; then
    echo "Configuration : OK"
else
    echo "Configuration : Manquante"
fi

# Vérifie si le dossier de logs existe
if [ -d "/opt/kirebos_networks/logs" ]; then
    echo "Logs : OK"
else
    echo "Logs : Manquants"
fi

echo "Vérification terminée."
