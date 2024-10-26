#!/bin/bash
# Backup script for DMZ configuration and logs
echo "Backing up DMZ configuration and logs..."
backup_dir="/path/to/backup"
mkdir -p $backup_dir
cp /etc/iptables/rules.v4 $backup_dir/dmz_iptables_backup
cp /var/log/dmz.log $backup_dir/dmz_backup.log
echo "DMZ configuration and logs backed up in $backup_dir."
