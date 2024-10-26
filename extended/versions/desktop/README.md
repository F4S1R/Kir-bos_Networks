# Kirebos Networks - Version Desktop

## Description
Cette version de **Kirebos Networks** est conçue pour un environnement Desktop. Elle offre une interface complète avec des fonctionnalités avancées pour la gestion réseau, la sécurité et la journalisation, adaptée aux performances d’un ordinateur de bureau.

## Structure
- **config** : Fichiers de configuration pour personnaliser les paramètres.
- **deploy** : Scripts de déploiement pour installer et mettre à jour l'application.
- **include** : Fichiers d'en-tête pour les classes principales.
- **src** : Fichiers source implémentant la logique de l'application.

## Fonctionnalités
- **Connexion réseau** : Gestion des connexions réseau via `desktop_connection`.
- **Sécurité** : Gestion des paramètres de sécurité incluant SSL et les IP autorisées.
- **Journalisation** : Système de log pour enregistrer les événements et les erreurs.

## Installation
1. Clonez le dépôt sur votre machine.
2. Exécutez le script de déploiement : `deploy/deploy_desktop.sh`.
3. Utilisez le fichier `config/config.yaml` pour configurer les paramètres.

## Utilisation
Lancez l'application avec la commande :
```bash
./main_desktop
