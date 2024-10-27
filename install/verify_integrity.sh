#!/bin/bash
echo "Vérification de l'intégrité des fichiers de Kirébos Networks..."

for file in "/opt/Kirebos_Networks/main_binary" "/opt/Kirebos_Networks/config/config.json"; do
    if [ ! -f "$file" ]; then
        echo "Erreur : Fichier $file manquant."
        exit 1
    fi
done

echo "Tous les fichiers requis sont présents."
