import os

def get_security_key():
    return os.getenv("SECURITY_KEY", "default_key")

def verify_key(key):
    return key == get_security_key()
