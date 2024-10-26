
### README pour le Dossier `logs_config`

**Emplacement** : `logs/logs_config/README.md`

```markdown
# Dossier `logs_config`

Le dossier `logs_config` contient les scripts de gestion et de configuration des logs pour le projet **Kirebos Networks**. Ces scripts automatisent la création, la rotation, la compression, et le nettoyage des fichiers logs, permettant ainsi une gestion centralisée des journaux d'événements.

## Scripts et Description

### 1. `app_log_setup.py`
- Initialise et configure `app.log`.
- Enregistre les événements principaux de l'application.

### 2. `backup_log.py`
- Gère `backup.log` pour suivre les opérations de sauvegarde.

### 3. `compress_old_log.py`
- Compresse les logs plus anciens que 7 jours dans le dossier `logs`.

### 4. `deploy_log.py`
- Enregistre les événements de déploiement dans `deploy.log`.
- **Fonctions** :
  - `log_deployment_start(version)`: Enregistre le début du déploiement d'une version.
  - `log_deployment_success(version)`: Enregistre le succès d'un déploiement.
  - `log_deployment_warning(version, issue)`: Enregistre un avertissement lors d'un déploiement.

### 5. `dmz_log_setup.py`
- Configure `dmz.log` pour la journalisation des événements liés à la DMZ.

### 6. `errors_log.py`
- Enregistre les erreurs critiques dans `errors.log`.

### 7. `log_cleanup.py`
- Supprime les logs plus anciens que 30 jours pour libérer de l'espace disque.

### 8. `log_rotation.py`
- Gère la rotation des logs selon `log_rotation.conf`.

### 9. `network_log_setup.py`
- Initialise `network.log` pour les événements réseau.

### 10. `security_log_setup.py`
- Configure `security.log` pour les événements de sécurité.

### 11. `config_changes_log.py`
- Enregistre les changements de configuration dans `config_changes.log`.
- **Fonctions** :
  - `log_config_change(component, change_description)`: Enregistre un changement de configuration.
  - `log_config_error(component, error_description)`: Enregistre une erreur de configuration.

### 12. `system_log_setup.py`
- Configure `system.log` pour les événements système.

## Commandes Principales pour la Gestion des Logs

Les scripts sont conçus pour être exécutés en ligne de commande pour gérer les différents aspects de la journalisation :

```bash
# Exécution des scripts de configuration
python logs/logs_config/app_log_setup.py
python logs/logs_config/deploy_log.py

# Nettoyage et rotation des logs
python logs/logs_config/log_cleanup.py
python logs/logs_config/log_rotation.py
