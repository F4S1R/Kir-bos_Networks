import configparser
import os

# Paths vers les fichiers de configuration
CONFIG_PATHS = {
    "network": "Config/network_config.ini",
    "dmz": "Config/dmz_config.ini",
    "security": "Config/security_settings.ini",
    "cloud": "Config/cloud_config.ini",
    "platform": "Config/platform_settings.ini"
}

def update_config_file(file_path, section, key, value):
    """Mise à jour d'une valeur dans un fichier de configuration .ini"""
    config = configparser.ConfigParser()
    config.read(file_path)
    if section in config:
        config[section][key] = value
        with open(file_path, 'w') as configfile:
            config.write(configfile)
        print(f"{key} mis à jour dans {file_path} [{section}]")
    else:
        print(f"Section {section} introuvable dans {file_path}")

def configure_network():
    print("\nConfiguration Réseau")
    default_port = input("Port par défaut: ")
    ssid = input("SSID WiFi: ")
    wifi_password = input("Mot de passe WiFi: ")

    update_config_file(CONFIG_PATHS["network"], "General", "default_port", default_port)
    update_config_file(CONFIG_PATHS["network"], "WiFi", "ssid", ssid)
    update_config_file(CONFIG_PATHS["network"], "WiFi", "password", wifi_password)

def configure_dmz():
    print("\nConfiguration DMZ")
    hotspot_ssid = input("SSID du Hotspot DMZ: ")
    hotspot_password = input("Mot de passe Hotspot: ")

    update_config_file(CONFIG_PATHS["dmz"], "Hotspot", "ssid", hotspot_ssid)
    update_config_file(CONFIG_PATHS["dmz"], "Hotspot", "password", hotspot_password)

def configure_security():
    print("\nConfiguration Sécurité")
    encryption_type = input("Type de chiffrement (AES-256, etc.): ")
    alert_email = input("Email pour les alertes: ")

    update_config_file(CONFIG_PATHS["security"], "Encryption", "type", encryption_type)
    update_config_file(CONFIG_PATHS["security"], "Alerts", "notification_email", alert_email)

def configure_cloud():
    print("\nConfiguration Cloud")
    api_key = input("Clé API: ")
    secret_key = input("Clé secrète: ")

    update_config_file(CONFIG_PATHS["cloud"], "Authentication", "api_key", api_key)
    update_config_file(CONFIG_PATHS["cloud"], "Authentication", "secret_key", secret_key)

def configure_platform():
    print("\nConfiguration Plateformes")
    desktop_theme = input("Thème UI pour Desktop (dark/light): ")
    mobile_theme = input("Thème UI pour Mobile (dark/light): ")

    update_config_file(CONFIG_PATHS["platform"], "Desktop", "ui_theme", desktop_theme)
    update_config_file(CONFIG_PATHS["platform"], "Mobile", "ui_theme", mobile_theme)

if __name__ == "__main__":
    print("Configuration Centralisée de Kirébos Networks")
    
    # Exécution des fonctions de configuration
    configure_network()
    configure_dmz()
    configure_security()
    configure_cloud()
    configure_platform()

    print("\nConfiguration complète !")
