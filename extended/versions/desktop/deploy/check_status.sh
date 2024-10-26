#!/bin/bash

echo "Vérification de l'état de Kirebos Networks Desktop..."

# Vérifier si le processus est en cours d'exécution
if pgrep -f "kirebos_networks_desktop" > /dev/null; then
    echo "Kirebos Networks Desktop est en cours d'exécution."
else
    echo "Kirebos Networks Desktop n'est pas en cours d'exécution."
fi
