import logging
import os

log_directory = "Kirebos_Networks/logs"
if not os.path.exists(log_directory):
    os.makedirs(log_directory)

logging.basicConfig(
    filename=os.path.join(log_directory, 'system.log'),
    level=logging.INFO,
    format='%(asctime)s - %(name)s - %(levelname)s - %(message)s'
)

logging.info("Système démarré.")
logging.info("Système en veille pour maintenance.")
