#!/bin/bash
# Restore script for Kirebos Networks configuration and logs
echo "Restoring Kirebos Networks configuration and logs..."

backup_dir="/backup/kirebos"
cp $backup_dir/*.yaml /opt/kirebos/config/
cp $backup_dir/*.log /opt/kirebos/logs/

echo "Restore complete. Configuration and logs have been restored."
