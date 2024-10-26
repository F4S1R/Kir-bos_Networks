#!/bin/bash
# Backup DMZ Configuration

echo "Starting DMZ configuration backup..."
tar -czvf "/path/to/backup/dmz_backup_$(date +%Y%m%d).tar.gz" /etc/dmz/configurations

if [ $? -eq 0 ]; then
    echo "DMZ backup completed successfully."
else
    echo "Failed to backup DMZ configurations."
fi
