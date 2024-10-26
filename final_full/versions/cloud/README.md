# Kirebos Networks - Cloud Version

## Description
This is the cloud-based version of Kirebos Networks, designed to operate in a cloud environment with enhanced security and remote accessibility.

## Configuration
1. Edit the `config/cloud_config.yaml` file to set the appropriate endpoint and API key.

## Compilation
To compile the cloud version, navigate to the `src` directory and run:
```bash
g++ -o main_cloud main_cloud.cpp cloud_manager.cpp
