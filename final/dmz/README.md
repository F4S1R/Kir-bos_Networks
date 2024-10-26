# Gestion de la DMZ pour Kirebos Networks

Le dossier `dmz/` contient les fichiers et scripts essentiels pour gérer la DMZ (Zone Démilitarisée) du projet **Kirebos Networks**. Ce système de DMZ est conçu pour ajouter une couche de sécurité supplémentaire en contrôlant les accès réseau et en surveillant les connexions.

## Fichiers et Scripts

### 1. Fichier de Configuration : `config_dmz.yaml`
Ce fichier contient les paramètres de configuration pour la DMZ, y compris les règles de pare-feu, la journalisation, les paramètres de connexion, et les options de sécurité.

### 2. Scripts de Gestion de la DMZ : `scripts/`
- **dmz_init.sh** : Initialise la DMZ en appliquant les règles de pare-feu et en configurant la sécurité conformément à `config_dmz.yaml`.
- **dmz_status.sh** : Vérifie l'état de la DMZ, y compris la connectivité réseau et les dernières entrées du journal de la DMZ.
- **dmz_reset.sh** : Réinitialise la DMZ aux paramètres par défaut en réinitialisant les règles de pare-feu et en rechargeant la configuration initiale.

### 3. Fichier de Configuration Python : `dmz_config.py`
Le fichier `dmz_config.py` permet de gérer la configuration de la DMZ en Python. Il inclut des fonctions pour charger et appliquer la configuration, ainsi que pour vérifier l'état de la DMZ.

#### Utilisation de `dmz_config.py`

Pour utiliser ce fichier Python :
```bash
python3 dmz_config.py
