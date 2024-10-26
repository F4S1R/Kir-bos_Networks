# Dossier `logs`

Le dossier `logs` centralise les fichiers de journalisation pour le projet **Kirebos Networks**. Chaque fichier `.log` est mis à jour automatiquement via des scripts Python situés dans `logs_config`. Ce dossier permet un suivi structuré et précis des événements critiques pour le déploiement, la configuration, et les opérations réseau.

## Fichiers Logs

### 1. `app.log`
- **Description** : Enregistre les événements principaux de l'application.
- **Source** : `app_log_setup.py` (dans `logs_config`).
  
### 2. `backup.log`
- **Description** : Suit les opérations de sauvegarde de l'application.
- **Source** : `backup_log.py` (dans `logs_config`).

### 3. `deploy.log`
- **Description** : Enregistre les étapes de déploiement pour chaque version.
- **Source** : `deploy_log.py` (dans `logs_config`).

### 4. `dmz.log`
- **Description** : Enregistre les activités de la DMZ (zone démilitarisée).
- **Source** : `dmz_log_setup.py` (dans `logs_config`).

### 5. `errors.log`
- **Description** : Consigne les erreurs critiques de l'application.
- **Source** : `errors_log.py` (dans `logs_config`).

### 6. `network.log`
- **Description** : Suit les événements réseau, incluant les connexions et les erreurs.
- **Source** : `network_log_setup.py` (dans `logs_config`).

### 7. `security.log`
- **Description** : Enregistre les événements de sécurité (authentifications, tentatives d'intrusion).
- **Source** : `security_log_setup.py` (dans `logs_config`).

### 8. `system.log`
- **Description** : Suit les événements système majeurs (démarrages, arrêts).
- **Source** : `system_log_setup.py` (dans `logs_config`).

### 9. `config_changes.log`
- **Description** : Suivi des modifications de configuration sur différents composants.
- **Source** : `config_changes_log.py` (dans `logs_config`).

## Fichier de Configuration

### `log_rotation.conf`
- **Description** : Contient les paramètres pour la rotation des logs (taille maximale, nombre de sauvegardes).
- **Utilisé par** : `log_rotation.py` pour gérer la rotation des fichiers log.

## Utilisation des Scripts de Gestion des Logs

Les scripts dans `logs_config` permettent de gérer et automatiser la création, la rotation, et la maintenance des fichiers logs :

```bash
# Initialisation des logs
python logs/logs_config/app_log_setup.py
python logs/logs_config/network_log_setup.py

# Rotation des logs
python logs/logs_config/log_rotation.py

# Nettoyage et compression
python logs/logs_config/log_cleanup.py
python logs/logs_config/compress_old_log.py
