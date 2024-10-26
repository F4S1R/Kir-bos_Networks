#!/bin/bash
echo "Starting installation of Kirebos Networks..."

# Mettre à jour les paquets et installer les dépendances
sudo apt update
sudo apt install -y python3 python3-pip git

# Cloner le dépôt et installer les dépendances Python si nécessaires
git clone https://github.com/votre_utilisateur/Kirebos_Networks.git
cd Kirebos_Networks
pip3 install -r requirements.txt  # Présuppose qu'un fichier requirements.txt est utilisé

echo "Installation complete. Please configure the 'config' files as needed."
