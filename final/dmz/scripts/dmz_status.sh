#!/bin/bash

echo "Vérification de l'état de la DMZ..."

# Vérification de la connectivité réseau (exemple avec Google DNS)
ping -c 4 8.8.8.8 > /dev/null
if [ $? -eq 0 ]; then
    echo "Connectivité réseau : OK"
else
    echo "Connectivité réseau : Échec"
fi

# Affichage des dernières entrées du journal DMZ
LOG_FILE="/opt/kirebos_networks/logs/dmz.log"
if [ -f "$LOG_FILE" ]; then
    echo "Dernières entrées du journal DMZ :"
    tail -n 10 "$LOG_FILE"
else
    echo "Aucun fichier de log DMZ trouvé."
fi
