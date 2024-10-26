# Guide Utilisateur de Kirebos Networks

## 1. Aperçu
Kirebos Networks est une application complète de gestion et de sécurité réseau conçue pour fournir des capacités de surveillance, de journalisation et de DMZ robustes. Ce guide vous accompagnera dans l'installation, la configuration et l'utilisation des divers composants de Kirebos Networks.

## 2. Installation

### Prérequis
- Python 3.x
- Node.js
- Bibliothèques requises (voir `requirements.txt`)

### Étapes d'Installation
1. Clonez le dépôt sur votre machine locale.
2. Installez les dépendances nécessaires :
   - Python 3.x
   - Node.js
   - Bibliothèques requises (voir `requirements.txt`).
3. Exécutez le script de configuration (`init_dmz.sh`) pour configurer la DMZ.

### Après l'Installation
- Mettez à jour les fichiers de configuration dans `config/` selon les besoins de votre environnement.

## 3. Configuration

### Fichiers de Configuration
Les fichiers de configuration pour Kirebos Networks incluent :

- `config.yaml` : Fichier principal de configuration avec les paramètres spécifiques à l'environnement.
- `dmz_config.yaml` : Configurations spécifiques à la DMZ, y compris les règles de pare-feu et le transfert de port.
- `.env` : Variables d'environnement pour les données sensibles (non incluses dans le contrôle de version).

Chaque fichier doit être soigneusement examiné et ajusté selon les exigences de votre configuration.

## 4. Modules

Kirebos Networks est composé de divers modules pour fournir une gestion réseau complète :

- **DMZ** : Le module DMZ inclut des scripts pour la configuration du pare-feu et la surveillance.
- **Journalisation** : Tous les événements et actions sont enregistrés pour audit dans le dossier `logs/`.
- **API** : Fournit des interfaces pour interagir avec le réseau.

Consultez `MODULES.md` pour une description détaillée des fonctionnalités de chaque module.

## 5. Sécurité

La sécurité est une priorité dans Kirebos Networks. Paramètres importants :

- **Pare-feu** : Configuré dans `dmz_config.yaml` pour contrôler le trafic réseau.
- **Authentification** : L'authentification à deux facteurs est recommandée pour l'accès administrateur.
- **Chiffrement** : Les données sensibles doivent être chiffrées et les clés stockées en sécurité.

Consultez `SECURITY.md` pour des recommandations supplémentaires.

## 6. Dépannage

### Problèmes Courants

- **Connectivité Réseau** : Vérifiez les paramètres du pare-feu dans `dmz_config.yaml`.
- **Problèmes de Journalisation** : Assurez-vous que le dossier `logs/` existe et dispose des autorisations d'écriture.
- **Erreurs de Configuration** : Vérifiez toutes les configurations dans `config.yaml` et `dmz_config.yaml` pour en assurer la précision.

Consultez `TROUBLESHOOTING.md` pour plus de détails.
