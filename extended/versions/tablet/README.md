# Kirebos Networks - Version Tablet

## Description
Cette version de **Kirebos Networks** est conçue pour les tablettes. Elle offre des fonctionnalités complètes de gestion réseau, de sécurité, et de journalisation, tout en étant optimisée pour un environnement mobile avec des écrans plus grands et plus de ressources que les téléphones.

## Structure
- **config** : Contient les fichiers de configuration pour personnaliser les paramètres.
- **deploy** : Scripts de déploiement et de vérification pour l'application tablet.
- **include** : Fichiers d'en-tête pour les composants principaux.
- **src** : Fichiers source qui implémentent la logique de l'application.

## Fonctionnalités
- **Connexion réseau** : Gestion des connexions réseau pour une expérience stable.
- **Sécurité** : Gestion de la sécurité incluant l'activation du chiffrement.
- **Journalisation** : Système de log pour enregistrer les événements et les erreurs.

## Installation
1. Clonez le dépôt sur votre appareil.
2. Exécutez le script de déploiement : `deploy/deploy_tablet.sh`.
3. Configurez les paramètres en modifiant les fichiers dans `config/`.

## Utilisation
Lancez l'application avec la commande :
```bash
./main_tablet
