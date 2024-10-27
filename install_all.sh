#!/bin/bash

echo "Déploiement de Kirébos Networks sur toutes les plateformes"

echo "Installation pour Desktop..."
(cd desktop/install && g++ Install.cpp -o InstallDesktop && ./InstallDesktop)

echo "Installation pour Mobile..."
(cd mobile/install && g++ InstallMobile.cpp -o InstallMobile && ./InstallMobile)

echo "Installation pour Cloud..."
(cd cloud/install && python3 InstallCloud.py)

echo "Déploiement terminé sur toutes les plateformes."
