"""
Script : configure_project.py
Projet : Kirébos Networks
Objectif : Centraliser la configuration des fichiers de base pour le projet Kirébos Networks.

DESCRIPTION :
    Ce script permet de configurer automatiquement les fichiers de configuration principaux du projet.
    Il évite la répétition des mises à jour manuelles en demandant les informations nécessaires une seule fois,
    puis en appliquant les modifications dans les fichiers .ini.

FONCTIONNALITÉS :
    - Mise à jour des paramètres réseau : ports, SSID, mot de passe WiFi, etc.
    - Configuration de la DMZ : paramètres de hotspot, sécurité, IP fixes.
    - Réglages de sécurité : niveau de chiffrement, notifications IDS, email d'alerte.
    - Configuration du cloud : clés d'API et autres paramètres cloud.
    - Paramètres spécifiques aux plateformes : thèmes UI et autres paramètres d'affichage.

INSTRUCTIONS :
    1. Placez ce script dans le dossier racine du projet (KirebosNetworks).
    2. Assurez-vous que les fichiers de configuration nécessaires (.ini) sont présents dans le dossier Config/.
    3. Exécutez le script depuis la racine du projet avec la commande suivante :
       ```bash
       python3 configure_project.py
       ```
    4. Suivez les instructions dans le terminal pour entrer les valeurs de configuration.
    5. Le script mettra automatiquement à jour les fichiers .ini en fonction des valeurs entrées.

STRUCTURE DU SCRIPT :
    - Fonctions de configuration : Chaque fonction (ex: configure_network) est dédiée à une section spécifique du projet.
    - Fonction utilitaire (update_config_file) : Gère la modification d'un fichier .ini en fonction de la section et de la clé.
    - Section principale : Appelle les fonctions dans un ordre logique et affiche un message de confirmation une fois la configuration terminée.

EXEMPLE DE SORTIE :
    Port par défaut: 8080
    SSID WiFi: YourSSID
    Mot de passe WiFi: ********
    "default_port" mis à jour dans Config/network_config.ini [General]
    "ssid" mis à jour dans Config/network_config.ini [WiFi]
    "password" mis à jour dans Config/network_config.ini [WiFi]
    ...
    Configuration complète !

NOTES :
    - Ce script ne supprime ni n’ajoute de sections dans les fichiers .ini ; il modifie uniquement les sections et clés existantes.
    - Vérifiez les permissions des fichiers si des erreurs de lecture/écriture surviennent.

Auteur : [Votre Nom]
Date : [Date de Création]
Dernière Mise à Jour : [Date de la Dernière Modification]
"""
