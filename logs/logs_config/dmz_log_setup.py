import logging
import os

log_directory = "Kirebos_Networks/logs"
if not os.path.exists(log_directory):
    os.makedirs(log_directory)

dmz_log_path = os.path.join(log_directory, 'dmz.log')
logging.basicConfig(
    filename=dmz_log_path,
    level=logging.INFO,
    format='%(asctime)s - DMZ - %(levelname)s - %(message)s'
)

logging.info("DMZ activée.")
logging.warning("Tentative de connexion non autorisée détectée.")
logging.error("Échec de connexion - DMZ surchargée.")
