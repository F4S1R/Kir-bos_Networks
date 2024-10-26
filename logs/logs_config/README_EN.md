### README for `logs_config` Directory (English Version)

**Location**: `logs/logs_config/README.md`

```markdown
# `logs_config` Directory

The `logs_config` directory contains scripts for managing and configuring logs for the **Kirebos Networks** project. These scripts automate the creation, rotation, compression, and cleanup of log files, enabling centralized log management.

## Scripts and Description

### 1. `app_log_setup.py`
- Initializes and configures `app.log`.
- Logs the main application events.

### 2. `backup_log.py`
- Manages `backup.log` to track backup operations.

### 3. `compress_old_log.py`
- Compresses logs older than 7 days in the `logs` directory.

### 4. `deploy_log.py`
- Records deployment events in `deploy.log`.
- **Functions**:
  - `log_deployment_start(version)`: Logs the start of a version deployment.
  - `log_deployment_success(version)`: Logs successful deployment.
  - `log_deployment_warning(version, issue)`: Logs a warning during deployment.

### 5. `dmz_log_setup.py`
- Configures `dmz.log` for logging DMZ-related events.

### 6. `errors_log.py`
- Logs critical errors in `errors.log`.

### 7. `log_cleanup.py`
- Deletes logs older than 30 days to save disk space.

### 8. `log_rotation.py`
- Manages log rotation according to `log_rotation.conf`.

### 9. `network_log_setup.py`
- Initializes `network.log` for network events.

### 10. `security_log_setup.py`
- Configures `security.log` for security events.

### 11. `config_changes_log.py`
- Logs configuration changes in `config_changes.log`.
- **Functions**:
  - `log_config_change(component, change_description)`: Logs a configuration change.
  - `log_config_error(component, error_description)`: Logs a configuration error.

### 12. `system_log_setup.py`
- Configures `system.log` for major system events.

## Main Commands for Log Management

The scripts are designed to be executed via command line for managing different aspects of logging:

```bash
# Running setup scripts
python logs/logs_config/app_log_setup.py
python logs/logs_config/deploy_log.py

# Log cleanup and rotation
python logs/logs_config/log_cleanup.py
python logs/logs_config/log_rotation.py
