# Kirebos Networks - Flip Phone Version

## Overview
The flip phone version of Kirebos Networks is designed to manage network connections, security, and data handling specifically tailored for flip phone devices. This version includes lightweight functionalities adapted for limited hardware, focusing on essential networking and security operations.

## Directory Structure

- **include/** : Contains header files (.h) defining the classes and functions specific to flip phone operations.
  - `flip_phone_manager.h` : Main class for managing flip phone services.
  - `flip_phone_connection.h` : Handles network connections for flip phone devices.
  - `flip_phone_security.h` : Manages security settings specific to flip phone environment.
  - `flip_phone_logger.h` : (Optional) Manages logging specific to flip phone activities.

- **src/** : Contains source files (.cpp) implementing the classes and functions defined in `include/`.
  - `flip_phone_manager.cpp` : Implements the `FlipPhoneManager` class, managing all flip phone-related operations.
  - `flip_phone_connection.cpp` : Implements the `FlipPhoneConnection` class, handling connections for flip phone services.
  - `flip_phone_security.cpp` : Implements the `FlipPhoneSecurity` class, configuring flip phone security.
  - `flip_phone_logger.cpp` : (Optional) Implements logging functions specific to flip phone activities.
  - `main_flip_phone.cpp` : Entry point for running the flip phone version of Kirebos Networks.

## Key Components

### FlipPhoneManager
The `FlipPhoneManager` class is responsible for initializing, deploying, backing up, and monitoring services on flip phone devices.

### FlipPhoneConnection
The `FlipPhoneConnection` class manages local network connections on flip phone devices.

### FlipPhoneSecurity
The `FlipPhoneSecurity` class ensures data protection through encryption and other security measures for flip phones.

### FlipPhoneLogger (Optional)
The `FlipPhoneLogger` class provides logging capabilities, assisting with diagnostics and monitoring on flip phone devices.

## How to Use

1. **Initialization**:
   Run the `main_flip_phone.cpp` file to start the flip phone version of Kirebos Networks. This initializes the flip phone manager and begins service management.

   ```bash
   g++ src/main_flip_phone.cpp src/flip_phone_manager.cpp src/flip_phone_connection.cpp src/flip_phone_security.cpp -o kirebos_flip_phone
   ./kirebos_flip_phone
