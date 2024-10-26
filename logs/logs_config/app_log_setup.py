import logging
import os

# Créer le dossier des logs s'il n'existe pas
log_directory = "Kirebos_Networks/logs"
if not os.path.exists(log_directory):
    os.makedirs(log_directory)

# Configurer le logger pour app.log
logging.basicConfig(
    filename=os.path.join(log_directory, 'app.log'),
    level=logging.INFO,
    format='%(asctime)s - %(name)s - %(levelname)s - %(message)s'
)

logging.info("Application Kirebos Networks démarrée.")
logging.info("Configuration chargée avec succès.")
