# Kirebos Networks - Cloud Version

## Overview
The cloud version of Kirebos Networks is designed to manage network connections, security, and data backup in a cloud environment. This module includes functionalities for connecting to cloud services, deploying resources, managing data security, and logging key events.

## Directory Structure

- **include/** : Contains header files (.h) defining the classes and functions used for cloud operations.
  - `cloud_manager.h` : Main class for managing cloud services.
  - `cloud_connection.h` : Handles cloud service connections.
  - `cloud_security.h` : Manages security settings specific to the cloud environment.
  - `cloud_logger.h` : (Optional) Handles logging specific to cloud activities.

- **src/** : Contains source files (.cpp) implementing the classes and functions defined in `include/`.
  - `cloud_manager.cpp` : Implements the `CloudManager` class, managing all cloud-related operations.
  - `cloud_connection.cpp` : Implements the `CloudConnection` class, handling cloud service connections.
  - `cloud_security.cpp` : Implements the `CloudSecurity` class, configuring cloud security.
  - `cloud_logger.cpp` : (Optional) Implements the logging functions specific to the cloud environment.
  - `main_cloud.cpp` : Entry point for running the cloud version of Kirebos Networks.

## Key Components

### CloudManager
The `CloudManager` class is the central class responsible for initializing, deploying, backing up, and monitoring cloud services.

### CloudConnection
The `CloudConnection` class manages the connection to the cloud provider and controls resources within the cloud.

### CloudSecurity
The `CloudSecurity` class ensures data protection through encryption and firewall rules.

### CloudLogger (Optional)
The `CloudLogger` class provides a structured way to log cloud activities, aiding in troubleshooting and audit.

## How to Use

1. **Initialization**:
   Run the `main_cloud.cpp` file to start the cloud version of Kirebos Networks. This will initialize the cloud manager and begin cloud service management.

   ```bash
   g++ src/main_cloud.cpp src/cloud_manager.cpp src/cloud_connection.cpp src/cloud_security.cpp -o kirebos_cloud
   ./kirebos_cloud
