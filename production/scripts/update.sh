#!/bin/bash
# Update script for Kirebos Networks
echo "Updating Kirebos Networks..."

# Mise à jour des fichiers de configuration et de scripts
cp -r new_version/config/*.yaml /opt/kirebos/config/
cp -r new_version/scripts/*.sh /opt/kirebos/scripts/

echo "Update complete. Kirebos Networks is now up-to-date."
