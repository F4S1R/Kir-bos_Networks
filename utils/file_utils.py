import os

def create_directory(path):
    """Crée un répertoire s'il n'existe pas."""
    if not os.path.exists(path):
        os.makedirs(path)
