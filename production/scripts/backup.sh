#!/bin/bash
# Backup script for Kirebos Networks configuration and logs
echo "Backing up Kirebos Networks configuration and logs..."

backup_dir="/backup/kirebos"
mkdir -p $backup_dir
cp /opt/kirebos/config/*.yaml $backup_dir/
cp /opt/kirebos/logs/*.log $backup_dir/

echo "Backup complete. Files saved to $backup_dir."
