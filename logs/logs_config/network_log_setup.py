import logging
import os

log_directory = "Kirebos_Networks/logs"
if not os.path.exists(log_directory):
    os.makedirs(log_directory)

logging.basicConfig(
    filename=os.path.join(log_directory, 'network.log'),
    level=logging.INFO,
    format='%(asctime)s - %(name)s - %(levelname)s - %(message)s'
)

logging.info("Connexion réseau établie (IP : 192.168.1.1).")
logging.info("Déconnexion réseau due à une erreur.")
