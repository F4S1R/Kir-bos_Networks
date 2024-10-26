#!/bin/bash
echo "Nettoyage des données anciennes en cours..."
find /path/to/data -type f -mtime +30 -exec rm {} \;
echo "Nettoyage terminé."
