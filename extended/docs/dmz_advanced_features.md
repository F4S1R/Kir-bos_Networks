# Guide de Configuration Avancée de la DMZ

## Introduction
Ce guide explique comment configurer les options avancées pour la DMZ, notamment l'application des règles de pare-feu, la surveillance continue et la configuration de la bascule automatique en cas de défaillance.

## Étapes de Configuration

### 1. Chargement de la Configuration
Assurez-vous que le fichier `dmz_advanced_config.yaml` est correctement rempli avec les règles de pare-feu, les paramètres de surveillance, et les options de bascule.

### 2. Application des Règles de Pare-feu
Utilisez le script `dmz_config.py` pour appliquer les règles de pare-feu en fonction de la configuration.

### 3. Configuration de la Bascule Automatique
La bascule automatique peut être activée dans `dmz_advanced_config.yaml`. Ce paramètre assure la redondance en cas de défaillance du serveur principal.
