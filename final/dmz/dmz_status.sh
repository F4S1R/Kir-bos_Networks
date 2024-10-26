#!/bin/bash

echo "Vérification de l'état de la DMZ..."

# Exemple de commande pour vérifier la connectivité
ping -c 4 8.8.8.8 > /dev/null

if [ $? -eq 0 ]; then
    echo "Connectivité réseau : OK"
else
    echo "Connectivité réseau : Échec"
fi

# Afficher les statistiques du journal DMZ
log_file="/opt/kirebos_networks/logs/dmz.log"
if [ -f "$log_file" ]; then
    echo "Dernières entrées du journal DMZ :"
    tail -n 10 "$log_file"
else
    echo "Fichier de log DMZ introuvable."
fi
