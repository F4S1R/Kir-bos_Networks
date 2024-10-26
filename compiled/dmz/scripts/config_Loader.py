# Compiled/DMZ/scripts/config_loader.py
import yaml

def load_configuration():
    with open('../config.yaml', 'r') as file:
        config = yaml.safe_load(file)
    return config

if __name__ == "__main__":
    config = load_configuration()
    print(f"Loaded configuration: {config['dmz']}")
