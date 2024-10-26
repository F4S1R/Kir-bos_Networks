# Cloud Deployment for Kirebos Networks

## Overview
This document provides the necessary instructions and configurations for deploying Kirebos Networks in a cloud environment.

## Configuration Files
- `cloud_settings.yaml`: Contains API keys, database, and endpoint configurations.
- `security_config.yaml`: SSL/TLS and firewall configurations.
- `connection_settings.yaml`: Manages connection timeout and retry settings.
- `backup_config.yaml`: Automatic backup frequency and retention settings.
- `logging_config.yaml`: Configurations for logging levels and log rotation.

## Deployment
Run `deploy_cloud.sh` in the `deploy/` folder to initiate the deployment process.

## Code Structure
- `include/cloud_manager.h`: Header file for the CloudManager class.
- `src/cloud_manager.cpp`: Implementation of the CloudManager class.
