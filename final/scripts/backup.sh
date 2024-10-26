#!/bin/bash

echo "Sauvegarde de Kirebos Networks..."

# Dossier de sauvegarde
BACKUP_DIR="/opt/kirebos_networks/backups"
mkdir -p "$BACKUP_DIR"

# Sauvegarder les configurations
CONFIG_DIR="/opt/kirebos_networks/config"
if [ -d "$CONFIG_DIR" ]; then
    cp -r "$CONFIG_DIR" "$BACKUP_DIR/config_backup_$(date +%F).tar.gz"
    echo "Configuration sauvegardée."
else
    echo "Erreur : Dossier de configuration introuvable."
fi

# Sauvegarder les logs
LOG_DIR="/opt/kirebos_networks/logs"
if [ -d "$LOG_DIR" ]; then
    cp -r "$LOG_DIR" "$BACKUP_DIR/logs_backup_$(date +%F).tar.gz"
    echo "Logs sauvegardés."
else
    echo "Erreur : Dossier de logs introuvable."
fi

echo "Sauvegarde terminée."
