#!/bin/bash

echo "Installation de Kirébos Networks..."

# Mettre à jour les paquets
sudo apt update && sudo apt upgrade -y

# Installer les dépendances nécessaires (Qt, OpenSSL, NetworkManager)
sudo apt install -y qt5-default libssl-dev network-manager

# Copier les fichiers du projet dans /opt/Kirebos_Networks
sudo mkdir -p /opt/Kirebos_Networks
sudo cp -r . /opt/Kirebos_Networks

# Créer un raccourci sur le bureau
cat << EOF > ~/Bureau/Kirebos_Networks.desktop
[Desktop Entry]
Name=Kirebos Networks
Exec=/opt/Kirebos_Networks/run_kirebos.sh
Icon=/opt/Kirebos_Networks/assets/icon.png
Type=Application
EOF

echo "Installation terminée. Vous pouvez lancer l'application depuis le bureau."
