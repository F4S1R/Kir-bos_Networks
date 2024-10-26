import os
import time

# Dossier des logs
log_directory = "Kirebos_Networks/logs"
# Nombre de jours après lequel les logs sont supprimés
days_to_keep = 30
current_time = time.time()

for filename in os.listdir(log_directory):
    file_path = os.path.join(log_directory, filename)
    if os.path.isfile(file_path):
        file_age = current_time - os.path.getmtime(file_path)
        # Supprimer les fichiers plus vieux que 30 jours
        if file_age > days_to_keep * 86400:  # 86400 secondes dans un jour
            os.remove(file_path)
            print(f"Supprimé : {file_path}")
