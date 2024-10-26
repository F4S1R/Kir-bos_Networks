import logging
import os

log_directory = "Kirebos_Networks/logs"
if not os.path.exists(log_directory):
    os.makedirs(log_directory)

logging.basicConfig(
    filename=os.path.join(log_directory, 'errors.log'),
    level=logging.ERROR,
    format='%(asctime)s - %(name)s - %(levelname)s - %(message)s'
)

logging.error("Erreur critique dans le module de sécurité.")
logging.error("Échec de connexion réseau (erreur 503).")
