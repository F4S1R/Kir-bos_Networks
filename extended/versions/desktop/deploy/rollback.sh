#!/bin/bash

echo "Rollback de Kirebos Networks Desktop..."

# Récupérer la dernière sauvegarde
LAST_BACKUP=$(ls -td /opt/kirebos/desktop/backups/* | head -1)

if [ -d "$LAST_BACKUP" ]; then
    # Restaurer les fichiers de la dernière sauvegarde
    cp -r $LAST_BACKUP/src /opt/kirebos/desktop/
    echo "Rollback effectué avec succès."
else
    echo "Aucune sauvegarde trouvée. Rollback impossible."
fi
