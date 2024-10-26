# Kirebos Networks - Mobile Version

## Overview
The mobile version of Kirebos Networks provides network management, security, and data handling tailored for mobile devices. This version includes lightweight functionalities optimized for limited hardware, focusing on essential networking and security operations for mobile environments.

## Directory Structure

- **include/** : Contains header files (.h) defining the classes and functions for mobile operations.
  - `mobile_manager.h` : Main class for managing mobile services.
  - `mobile_connection.h` : Manages network connections for mobile devices.
  - `mobile_security.h` : Handles security settings specific to mobile environments.
  - `mobile_logger.h` : (Optional) Manages logging specific to mobile activities.

- **src/** : Contains source files (.cpp) implementing the classes and functions defined in `include/`.
  - `mobile_manager.cpp` : Implements the `MobileManager` class, managing all mobile-related operations.
  - `mobile_connection.cpp` : Implements the `MobileConnection` class, handling connections for mobile services.
  - `mobile_security.cpp` : Implements the `MobileSecurity` class, configuring mobile security.
  - `mobile_logger.cpp` : (Optional) Implements logging functions specific to mobile activities.
  - `main_mobile.cpp` : Entry point for running the mobile version of Kirebos Networks.

## Key Components

### MobileManager
The `MobileManager` class is responsible for initializing, deploying, backing up, and monitoring services on mobile devices.

### MobileConnection
The `MobileConnection` class manages network connections within the mobile environment.

### MobileSecurity
The `MobileSecurity` class ensures data protection through encryption and firewall rules tailored for mobile devices.

### MobileLogger (Optional)
The `MobileLogger` class provides logging functionality, assisting with diagnostics and monitoring on mobile devices.

## How to Use

1. **Initialization**:
   Run the `main_mobile.cpp` file to start the mobile version of Kirebos Networks. This will initialize the mobile manager and begin service management.

   ```bash
   g++ src/main_mobile.cpp src/mobile_manager.cpp src/mobile_connection.cpp src/mobile_security.cpp -o kirebos_mobile
   ./kirebos_mobile
