import logging
import os

log_directory = "Kirebos_Networks/logs"
if not os.path.exists(log_directory):
    os.makedirs(log_directory)

logging.basicConfig(
    filename=os.path.join(log_directory, 'backup.log'),
    level=logging.INFO,
    format='%(asctime)s - %(name)s - %(levelname)s - %(message)s'
)

logging.info("Sauvegarde quotidienne réussie.")
logging.info("Échec de la sauvegarde (espace disque insuffisant).")
