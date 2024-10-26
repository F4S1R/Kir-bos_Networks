#!/bin/bash

echo "Vérification de l'état de Kirebos Networks Mobile..."

if pgrep -f "kirebos_mobile" > /dev/null; then
    echo "Kirebos Networks Mobile est en cours d'exécution."
else
    echo "Kirebos Networks Mobile n'est pas en cours d'exécution."
fi
