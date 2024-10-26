#!/bin/bash
echo "Backing up Kirebos Networks configurations..."
tar -czvf backup_$(date +%Y%m%d).tar.gz /path/to/config /path/to/logs
echo "Backup complete."
