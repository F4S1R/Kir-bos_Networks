# Compiled/DMZ/scripts/initialize_dmz.py
import yaml

def load_configuration():
    with open('../config.yaml', 'r') as file:
        config = yaml.safe_load(file)
    return config

def initialize_dmz():
    config = load_configuration()
    print(f"Initializing DMZ with configuration: {config['dmz']}")
    # Add DMZ initialization logic here
    print("DMZ initialized successfully.")

if __name__ == "__main__":
    initialize_dmz()
