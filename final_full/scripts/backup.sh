#!/bin/bash
# backup.sh - Script to backup configurations and critical data

BACKUP_DIR="backups/$(date +%Y-%m-%d)"
echo "Creating backup directory at $BACKUP_DIR"
mkdir -p $BACKUP_DIR

echo "Backing up configuration files..."
cp config/*.yaml $BACKUP_DIR

echo "Backing up logs..."
cp logs/*.log $BACKUP_DIR

echo "Backup completed successfully at $BACKUP_DIR"
