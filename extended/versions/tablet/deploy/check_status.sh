#!/bin/bash

echo "Vérification de l'état de Kirebos Networks Tablet..."

if pgrep -f "kirebos_tablet" > /dev/null; then
    echo "Kirebos Networks Tablet est en cours d'exécution."
else
    echo "Kirebos Networks Tablet n'est pas en cours d'exécution."
fi
