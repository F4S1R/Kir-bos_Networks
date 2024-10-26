#!/bin/bash
# restore.sh - Script to restore configurations and data from a backup

if [ -z "$1" ]; then
    echo "Usage: ./restore.sh <backup_date>"
    exit 1
fi

BACKUP_DIR="backups/$1"

if [ ! -d "$BACKUP_DIR" ]; then
    echo "Backup directory $BACKUP_DIR does not exist."
    exit 1
fi

echo "Restoring configuration files..."
cp $BACKUP_DIR/*.yaml config/

echo "Restoring logs..."
cp $BACKUP_DIR/*.log logs/

echo "Restore completed successfully from $BACKUP_DIR"
