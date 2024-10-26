# DMZ Configuration for Kirebos Networks

## Overview
This folder contains the configuration files and scripts required to set up and manage the Demilitarized Zone (DMZ) for Kirebos Networks.

## Files
- **dmz_config.py** : Python script to configure DMZ settings, including firewall and IP permissions.
- **dmz_init.sh** : Shell script to initialize DMZ settings and apply default security configurations.

## Usage
1. **Configure DMZ** : Run `python3 dmz_config.py` to load default DMZ settings and set firewall permissions.
2. **Initialize DMZ** : Execute `./dmz_init.sh` to start the DMZ with default security rules and apply firewall settings.
3. **Customization** : Modify `dmz_config.py` to adjust allowed and blocked IPs as well as other security settings.
