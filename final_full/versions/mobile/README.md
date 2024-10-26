# Kirebos Networks - Mobile Version

## Description
This is the mobile version of Kirebos Networks, designed to operate on mobile devices using Wi-Fi connectivity.

## Configuration
1. Edit the `config/mobile_config.yaml` file to set the appropriate network interface and logging preferences.

## Compilation
To compile the mobile version, navigate to the `src` directory and run:
```bash
g++ -o main_mobile main_mobile.cpp mobile_manager.cpp
