#!/bin/bash

echo "Vérification de l'état de Kirebos Networks Flip Phone..."

if pgrep -f "kirebos_flip_phone" > /dev/null; then
    echo "Kirebos Networks Flip Phone est en cours d'exécution."
else
    echo "Kirebos Networks Flip Phone n'est pas en cours d'exécution."
fi
