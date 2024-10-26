# Kirebos Networks - Tablet Version

## Description
This is the tablet version of Kirebos Networks, designed to operate on tablet devices using Wi-Fi connectivity.

## Configuration
1. Edit the `config/tablet_config.yaml` file to set the appropriate network interface and logging preferences.

## Compilation
To compile the tablet version, navigate to the `src` directory and run:
```bash
g++ -o main_tablet main_tablet.cpp tablet_manager.cpp
