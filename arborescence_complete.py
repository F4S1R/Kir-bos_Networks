import os

# Nom du dossier racine pour l’archive complète
base_dir = "Kirebos_Networks"

# Structure enrichie avec archivage, développement, compilation, UX/UI, versioning
structure = {
    "archive": {
        "previous_versions": ["v1.0.zip", "v1.1.zip"]
    },
    "dev": {
        "src": {
            "core": ["main.cpp", "NetworkManager.cpp", "UIManager.cpp"],
            "modules": ["encryption.cpp", "utils.cpp"]
        },
        "lib": ["third_party_lib.so", "custom_library.a"],
        "build": {
            "windows": ["compile.bat"],
            "linux": ["compile.sh"],
            "macos": ["compile_macos.sh"]
        }
    },
    "ux_ui": {
        "desktop": ["main_window.xaml", "styles.xaml"],
        "mobile": {
            "android": ["android_main.xml", "android_styles.xml"],
            "ios": ["ios_main.storyboard", "ios_styles.plist"]
        },
        "web": ["index.html", "app.css", "app.js"]
    },
    "versions": {
        "windows": ["KirebosNetworks_installer.exe"],
        "linux": ["KirebosNetworks_installer.deb"],
        "mac": ["KirebosNetworks_installer.pkg"],
        "android": ["KirebosNetworks.apk"],
        "ios": ["KirebosNetworks.ipa"]
    },
    "installation": {
        "executables": ["installer.exe", "setup.sh"],
        "docs": ["installation_guide.pdf", "requirements.txt"],
        "scripts": ["dependency_check.py", "install_modules.sh"]
    },
    "programming_states": {
        "prototype": {
            "docs": ["prototype_notes.md"],
            "src": ["prototype_main.cpp"]
        },
        "development": {
            "docs": ["dev_notes.md"],
            "src": [
                "main.cpp",
                "NetworkManager.cpp",
                "UIManager.cpp"
            ],
            "tests": ["unit_tests.py", "integration_tests.py"]
        },
        "pre_production": {
            "docs": ["pre_prod_notes.md"],
            "src": ["main.cpp", "NetworkManager.cpp", "UIManager.cpp"],
            "tests": ["qa_tests.py"]
        },
        "production": {
            "docs": ["prod_release_notes.md", "user_manual.pdf"],
            "deployment_scripts": ["deploy.sh", "backup.sh"]
        }
    },
    "deployment_states": {
        "unit_tests": {
            "basic_tests": ["test_network.py", "test_ui.py"],
        },
        "advanced_tests": {
            "performance_tests": ["stress_test.py", "load_test.py"],
            "security_tests": ["firewall_test.py", "honeypot_test.py"],
        },
        "cloud_deployment": {
            "aws": ["aws_setup.sh"],
            "gcp": ["gcp_setup.sh"]
        },
        "local_deployment": ["install_local.sh", "configure_local_env.sh"]
    },
    "functioning": {
        "real_time_monitoring": ["network_status.py", "security_alerts.py"],
        "logs": ["connection_logs.txt", "event_logs.txt"],
        "reports": ["daily_report.py", "weekly_report.py"]
    },
    "security": {
        "dmz_config": ["iptables_rules.sh", "vpn_setup.ovpn"],
        "monitoring": ["honeypot_config.py", "fail2ban_config.conf"],
        "backup_and_recovery": ["backup_db.sh", "recovery_guide.pdf"]
    },
    "uninstallation": {
        "uninstall_scripts": ["remove_all.sh", "uninstall_guide.pdf"],
        "backup_options": ["backup_logs.sh", "archive_settings.py"]
    },
    "docs": {
        "installation_guide": ["installation_windows.md", "installation_linux.md"],
        "technical_notes": ["architecture.md", "dmz_security.md"],
        "user_manual": ["user_guide.pdf"]
    }
}

# Fonction pour créer l’arborescence sans contenu dans les fichiers
def create_structure(base_path, structure):
    for folder, contents in structure.items():
        folder_path = os.path.join(base_path, folder)
        os.makedirs(folder_path, exist_ok=True)
        for item in contents:
            if isinstance(item, dict):
                create_structure(folder_path, item)
            else:
                file_path = os.path.join(folder_path, item)
                # Crée un fichier vide
                open(file_path, 'w').close()
                print(f"Fichier créé : {file_path}")

# Exécuter la création de l’arborescence
if __name__ == "__main__":
    create_structure(base_dir, structure)
    print(f"Arborescence '{base_dir}' générée avec succès avec tous les fichiers vides.")
