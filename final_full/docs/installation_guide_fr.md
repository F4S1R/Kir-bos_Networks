# Guide d'Installation de Kirebos Networks

## Pré-requis
- **Systèmes d'exploitation supportés** : Linux, Windows, Android, iOS, Raspberry Pi.
- **Dépendances** :
  - Qt pour l'interface utilisateur.
  - OpenSSL pour le chiffrement.
  - NetworkManager pour la gestion du réseau.

## Instructions d'Installation
1. **Cloner le dépôt** : `git clone https://github.com/F4S1R/Kirebos_Networks.git`
2. **Installer les dépendances** :
   - **Linux** : `sudo apt-get install libssl-dev qt5-default`
   - **Windows** : Téléchargez et installez Qt et OpenSSL.
3. **Compiler le Projet** :
   - Accédez au dossier du projet et exécutez `make` pour compiler.
4. **Exécuter l'application** : Lancez l'exécutable correspondant à votre plateforme (`main_desktop`, `main_mobile`, etc.).
