import logging
import os
from logging.handlers import RotatingFileHandler

# Dossier des logs
log_directory = "Kirebos_Networks/logs"
if not os.path.exists(log_directory):
    os.makedirs(log_directory)

# Fonction pour configurer la rotation des logs
def setup_rotating_log(log_filename):
    log_path = os.path.join(log_directory, log_filename)
    handler = RotatingFileHandler(log_path, maxBytes=5*1024*1024, backupCount=3)  # 5 MB par fichier, 3 rotations
    logger = logging.getLogger(log_filename)
    logger.setLevel(logging.INFO)
    handler.setFormatter(logging.Formatter('%(asctime)s - %(name)s - %(levelname)s - %(message)s'))
    logger.addHandler(handler)
    return logger

# Configurer les logs avec rotation pour chaque fichier de log principal
app_logger = setup_rotating_log('app.log')
network_logger = setup_rotating_log('network.log')
security_logger = setup_rotating_log('security.log')
system_logger = setup_rotating_log('system.log')
backup_logger = setup_rotating_log('backup.log')
dmz_logger = setup_rotating_log('dmz.log')
errors_logger = setup_rotating_log('errors.log')

# Enregistrer des messages de test pour vérifier la rotation
app_logger.info("Test de rotation - app.log")
network_logger.info("Test de rotation - network.log")
security_logger.info("Test de rotation - security.log")
system_logger.info("Test de rotation - system.log")
backup_logger.info("Test de rotation - backup.log")
dmz_logger.info("Test de rotation - dmz.log")
errors_logger.info("Test de rotation - errors.log")
