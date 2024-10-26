import logging
import os

# Configuration du répertoire de logs
log_directory = "logs"
if not os.path.exists(log_directory):
    os.makedirs(log_directory)

# Configuration du logger pour deploy.log
logging.basicConfig(
    filename=os.path.join(log_directory, 'deploy.log'),
    level=logging.INFO,
    format='%(asctime)s - %(levelname)s - %(message)s'
)

def log_deployment_start(version):
    """Log l'initialisation d'un déploiement."""
    logging.info(f"Déploiement initialisé pour la version {version}")

def log_deployment_success(version):
    """Log la réussite d'un déploiement."""
    logging.info(f"Déploiement complété pour la version {version}")

def log_deployment_warning(version, issue):
    """Log un problème mineur lors d'un déploiement."""
    logging.warning(f"Problème détecté lors du déploiement de la version {version}: {issue}")
