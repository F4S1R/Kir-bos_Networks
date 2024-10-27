import hashlib
import os

def hash_password(password):
    """Hash et sale un mot de passe."""
    salt = os.urandom(16)
    pwd_hash = hashlib.pbkdf2_hmac('sha256', password.encode(), salt, 100000)
    return salt + pwd_hash
