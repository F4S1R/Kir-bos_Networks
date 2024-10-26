# `config` Directory

The `config` directory contains all essential configuration files for the **Kirebos Networks** production environment. These files are crucial for optimizing the application’s security, performance, and stability.

## Configuration Files

- **config.yaml**: The master configuration file that centralizes key settings for the production environment. It references specific configuration files to streamline management.
- **app_config.yaml**: Defines primary application settings, including name, version, and maintenance mode.
- **database_config.yaml**: Details the production database connection parameters such as host, port, database name, user, and password.
- **network_config.yaml**: Contains network configurations, including security level, DMZ activation, SSL protocol, and intrusion detection settings.
- **security_config.yaml**: Manages production security settings, including encryption keys, login attempt limits, and password policies.
- **api_config.yaml**: Defines API settings such as rate limiting, timeouts, and token expiration policies.

## Usage

Each configuration file should be reviewed and tailored to the specific requirements of the production environment prior to deployment.

### Security

It is vital to secure configuration files containing sensitive information, such as passwords and encryption keys. Access to this directory should be restricted to system administrators only.

For a comprehensive overview, refer to the `config.yaml` file, which serves as the central point for all configuration settings.
