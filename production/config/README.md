# Dossier `config`

Le dossier `config` contient les fichiers de configuration essentiels pour l’environnement de production de **Kirebos Networks**. Ces fichiers assurent une configuration optimisée pour la sécurité, les performances, et la stabilité de l'application.

## Fichiers de Configuration

- **config.yaml** : Fichier maître centralisant les configurations principales de l'application en production. Il inclut des références vers les fichiers de configuration spécifiques pour faciliter la gestion.
- **app_config.yaml** : Paramètres de l'application, incluant les informations globales sur le nom, la version, et le mode de maintenance.
- **database_config.yaml** : Spécifie les paramètres de connexion à la base de données pour l’environnement de production.
- **network_config.yaml** : Contient les configurations réseau, incluant la sécurité, le DMZ, les protocoles SSL, et la détection d'intrusion.
- **security_config.yaml** : Gère les paramètres de sécurité comme le chiffrement, les tentatives de connexion, et la politique de mots de passe.
- **api_config.yaml** : Paramètres de l'API, incluant les contrôles de débit, les délais d’attente, et les politiques de token.

## Utilisation

Avant le déploiement, chaque fichier de configuration doit être vérifié et ajusté en fonction des spécifications exactes de votre environnement de production.

### Sécurité

Assurez-vous de protéger les fichiers de configuration contenant des informations sensibles, comme les mots de passe et les clés de chiffrement. Il est recommandé de limiter l'accès à ce dossier aux administrateurs système.

Pour plus de détails, reportez-vous au fichier `config.yaml` qui centralise toutes les informations.

---

### README en Anglais (config)

**Emplacement** : `Kirebos_Networks/production/config/README_EN.md`

```markdown
# `config` Directory

The `config` directory contains essential configuration files for the **Kirebos Networks** production environment. These files ensure optimized settings for security, performance, and stability.

## Configuration Files

- **config.yaml**: Master configuration file that centralizes key settings for the application in production. It includes references to specific configuration files for easier management.
- **app_config.yaml**: Application settings, including global information on name, version, and maintenance mode.
- **database_config.yaml**: Specifies database connection settings for the production environment.
- **network_config.yaml**: Contains network configurations, including security, DMZ, SSL protocols, and intrusion detection.
- **security_config.yaml**: Manages security settings such as encryption, login attempts, and password policy.
- **api_config.yaml**: API settings, including rate limiting, timeouts, and token policies.

## Usage

Before deployment, each configuration file should be reviewed and adjusted according to the specific requirements of your production environment.

### Security

Ensure that configuration files containing sensitive information, such as passwords and encryption keys, are secured. It is recommended to limit access to this folder to system administrators.

For more details, refer to the `config.yaml` file, which centralizes all information.
