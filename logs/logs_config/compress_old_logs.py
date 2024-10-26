import os
import time
import gzip
import shutil

log_directory = "Kirebos_Networks/logs"
days_to_compress = 7
current_time = time.time()

for filename in os.listdir(log_directory):
    file_path = os.path.join(log_directory, filename)
    if os.path.isfile(file_path) and filename.endswith(".log"):
        file_age = current_time - os.path.getmtime(file_path)
        if file_age > days_to_compress * 86400:  # Plus de 7 jours
            with open(file_path, 'rb') as f_in:
                with gzip.open(file_path + '.gz', 'wb') as f_out:
                    shutil.copyfileobj(f_in, f_out)
            os.remove(file_path)
            print(f"Compressé et supprimé : {file_path}")
