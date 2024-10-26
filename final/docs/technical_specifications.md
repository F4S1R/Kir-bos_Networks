# Spécifications Techniques - Kirebos Networks

## Architecture du Système
Kirebos Networks est conçu avec une architecture modulaire pour gérer efficacement la sécurité, les connexions réseau et la journalisation des événements. L'architecture du système comprend plusieurs modules principaux :

- **Module de Sécurité** : Gère l'authentification, l'autorisation, et le chiffrement des données pour assurer la protection contre les accès non autorisés.
- **Module Réseau** : Responsable de la gestion des connexions réseau, y compris les paramètres DMZ, et fournit un contrôle et une surveillance en temps réel.
- **Module de Journalisation** : Enregistre les événements importants, les erreurs, et les actions de l'utilisateur pour faciliter la maintenance et le dépannage.

## Dépendances
Le projet Kirebos Networks dépend de plusieurs bibliothèques et outils pour son bon fonctionnement :

- **Python 3.x** : Utilisé pour les scripts de gestion de configuration et le contrôle de la DMZ.
- **OpenSSL** : Pour le chiffrement des données, garantissant la confidentialité des informations sensibles.
- **UFW (Uncomplicated Firewall)** : Outil de gestion du pare-feu sous Linux.
- **Qt** : Utilisé pour l'interface graphique dans la version Desktop.
- **YAML** : Format de fichier de configuration pour une lecture et une écriture simplifiées des paramètres.

## Exigences Système
Pour assurer un fonctionnement optimal, Kirebos Networks nécessite les spécifications système suivantes :

- **Système d'exploitation** : Linux, Windows, ou macOS
- **RAM** : Minimum de 2 Go
- **Espace Disque** : Minimum de 500 Mo pour l'installation et les fichiers de log
- **Connexion réseau** : Requise pour les fonctionnalités de surveillance et de gestion de la DMZ

## Composants Clés
### 1. Sécurité
Le module de sécurité inclut :
- **Authentification** : Contrôle d'accès utilisateur via un système de connexion sécurisé.
- **Chiffrement** : Utilisation de l'algorithme AES-256 pour chiffrer les données sensibles.
- **Pare-feu** : Configuration des règles de pare-feu pour autoriser ou bloquer les connexions en fonction des paramètres définis.

### 2. Connexions Réseau
Le module réseau inclut :
- **Gestion de la DMZ** : Zone démilitarisée configurée pour filtrer les connexions non autorisées.
- **Surveillance en Temps Réel** : Surveillance des connexions réseau pour détecter toute activité suspecte.

### 3. Journalisation
Le module de journalisation inclut :
- **Enregistrement des Logs** : Création de fichiers de log pour chaque événement important.
- **Rétention des Logs** : Stockage des logs pour une durée configurable, permettant une révision historique des événements.

