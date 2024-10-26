# Kirebos Networks - Desktop Version

## Description
This is the desktop version of Kirebos Networks, designed to operate on personal computers with Ethernet and Wi-Fi connectivity.

## Configuration
1. Edit the `config/desktop_config.yaml` file to set the appropriate network interface and logging preferences.

## Compilation
To compile the desktop version, navigate to the `src` directory and run:
```bash
g++ -o main_desktop main_desktop.cpp desktop_manager.cpp
