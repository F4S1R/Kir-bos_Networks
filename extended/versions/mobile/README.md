# Kirebos Networks - Version Mobile

## Description
Cette version de **Kirebos Networks** est conçue pour les appareils mobiles. Elle offre des fonctionnalités essentielles de gestion réseau et de sécurité, adaptées aux ressources limitées et aux spécificités d'un environnement mobile.

## Structure
- **config** : Contient les fichiers de configuration pour personnaliser les paramètres.
- **deploy** : Scripts de déploiement et de vérification pour l'application mobile.
- **include** : Fichiers d'en-tête pour les composants principaux.
- **src** : Fichiers source qui implémentent la logique de l'application.

## Fonctionnalités
- **Connexion réseau** : Gestion simplifiée des connexions réseau via `mobile_connection`.
- **Sécurité** : Gestion de la sécurité, incluant l’activation du chiffrement.
- **Journalisation** : Système de log pour enregistrer les événements importants et les erreurs.

## Installation
1. Clonez le dépôt sur votre appareil.
2. Exécutez le script de déploiement : `deploy/deploy_mobile.sh`.
3. Configurez les paramètres en modifiant les fichiers dans `config/`.

## Utilisation
Lancez l'application avec la commande :
```bash
./main_mobile
