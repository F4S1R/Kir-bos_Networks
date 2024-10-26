import logging
import os

# Configuration du répertoire de logs
log_directory = "logs"
if not os.path.exists(log_directory):
    os.makedirs(log_directory)

# Configuration du logger pour config_changes.log
logging.basicConfig(
    filename=os.path.join(log_directory, 'config_changes.log'),
    level=logging.INFO,
    format='%(asctime)s - %(levelname)s - %(message)s'
)

def log_config_change(component, change_description):
    """Log un changement de configuration pour un composant spécifique."""
    logging.info(f"Changement de configuration pour {component}: {change_description}")

def log_config_error(component, error_description):
    """Log une erreur lors d'un changement de configuration."""
    logging.error(f"Échec de configuration pour {component}: {error_description}")
