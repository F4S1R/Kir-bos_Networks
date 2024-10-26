# `logs` Directory

The `logs` directory centralizes all log files for the **Kirebos Networks** project. Each `.log` file is automatically updated via Python scripts in `logs_config`. This directory provides structured and accurate tracking of critical events for deployment, configuration, and network operations.

## Log Files

### 1. `app.log`
- **Description**: Records main application events.
- **Source**: `app_log_setup.py` (in `logs_config`).
  
### 2. `backup.log`
- **Description**: Tracks application backup operations.
- **Source**: `backup_log.py` (in `logs_config`).

### 3. `deploy.log`
- **Description**: Logs deployment steps for each version.
- **Source**: `deploy_log.py` (in `logs_config`).

### 4. `dmz.log`
- **Description**: Logs DMZ (demilitarized zone) activities.
- **Source**: `dmz_log_setup.py` (in `logs_config`).

### 5. `errors.log`
- **Description**: Records critical application errors.
- **Source**: `errors_log.py` (in `logs_config`).

### 6. `network.log`
- **Description**: Tracks network events, including connections and errors.
- **Source**: `network_log_setup.py` (in `logs_config`).

### 7. `security.log`
- **Description**: Logs security events (authentications, intrusion attempts).
- **Source**: `security_log_setup.py` (in `logs_config`).

### 8. `system.log`
- **Description**: Tracks major system events (startups, shutdowns).
- **Source**: `system_log_setup.py` (in `logs_config`).

### 9. `config_changes.log`
- **Description**: Tracks configuration changes on various components.
- **Source**: `config_changes_log.py` (in `logs_config`).

## Configuration File

### `log_rotation.conf`
- **Description**: Contains parameters for log rotation (max size, backup count).
- **Used by**: `log_rotation.py` to manage log file rotation.

## Using Log Management Scripts

The scripts in `logs_config` handle the creation, rotation, and maintenance of log files:

```bash
# Initializing logs
python logs/logs_config/app_log_setup.py
python logs/logs_config/network_log_setup.py

# Log rotation
python logs/logs_config/log_rotation.py

# Cleanup and compression
python logs/logs_config/log_cleanup.py
python logs/logs_config/compress_old_log.py
