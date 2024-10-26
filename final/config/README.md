# Kirebos Networks

## Description
**Kirebos Networks** est une solution de gestion de réseau avancée, adaptée à plusieurs types de dispositifs, notamment les ordinateurs de bureau, les téléphones mobiles, les tablettes, et les téléphones à clapet. Le projet offre des fonctionnalités de sécurité, de gestion de connexions réseau, de journalisation, et d'administration en temps réel, permettant une expérience réseau sécurisée et fluide.

## Fonctionnalités
- **Gestion des Connexions Réseau** : Contrôle des connexions entrantes et sortantes avec des paramètres personnalisables pour chaque type d’appareil.
- **Sécurité et Chiffrement** : Activation du chiffrement des données, limitation des tentatives de connexion, et gestion des configurations de sécurité.
- **Journalisation** : Système de journalisation complet pour enregistrer les événements, les erreurs et les informations de diagnostic, avec des fichiers de log pour chaque version.
- **Compatibilité Multi-Plateforme** : Versions spécifiques pour Desktop, Mobile, Tablet, et Flip Phone, chacune optimisée pour son environnement respectif.
- **Scripts de Déploiement** : Automatisation de l'installation, de la mise à jour et de la vérification de l'état de chaque version.

## Configuration

Les paramètres globaux du projet sont centralisés dans le dossier `final/config`. Voici un aperçu des fichiers de configuration :

- **config.yaml** : Configuration principale du projet, incluant les paramètres généraux, de sécurité, de journalisation, et de réseau.
- **global_config.yaml** : Fichier alternatif pour des paramètres de base de l'application et des réglages généraux.
- **security_settings.yaml** : Paramètres de sécurité partagés, incluant la politique de mot de passe, les tentatives de connexion, et les configurations du pare-feu.
- **logging_settings.yaml** : Configuration de journalisation, permettant de définir le niveau de log, le chemin du fichier de log, et les paramètres de rotation.
- **network_config.yaml** : Paramètres réseau globaux, incluant les points d'accès API, les intervalles de connexion et les vérifications de connectivité.

Chaque version peut également avoir des paramètres spécifiques dans son propre dossier `config/`.

## Installation
Pour installer **Kirebos Networks**, suivez les étapes ci-dessous. Des instructions plus détaillées sont disponibles dans le fichier [INSTALL.md](INSTALL.md).

### Étapes de Base
1. **Clonez le Dépôt** :
   ```bash
   git clone https://github.com/F4S1R/Kirebos_Networks.git
