#!/bin/bash
# Script pour compiler et exécuter des applications dans compile/scripts

echo "Compilation des composants du projet..."

# Compilation du gestionnaire de DMZ
g++ ../DMZ/dmz_manager.cpp -o dmz_manager
echo "Compilation de dmz_manager.cpp terminée."

# Exécution du gestionnaire de DMZ
echo "Démarrage du gestionnaire de DMZ..."
./dmz_manager
echo "Gestionnaire de DMZ en cours d'exécution."

# Initialisation des scripts Python, si nécessaire
echo "Exécution des scripts Python pour la configuration initiale..."
python3 ../DMZ/scripts/initialize_dmz.py
echo "Scripts Python exécutés."

echo "Tous les composants ont été compilés et exécutés."
