# Troubleshooting Guide - Kirebos Networks

## Connection Issues
### Issue: Unable to connect to the network
1. Check connectivity with the server using `ping`.
2. Ensure network settings are correct in `network_config.yaml`.
3. Restart the network module if necessary.

## Security Issues
### Issue: Unauthorized connections detected
1. Check logs to identify the source IP of the connection.
2. Add this IP to the blocked IP list in `security_settings.yaml`.
3. Reset firewall rules if needed.

## Logging Issues
### Issue: Log file not accessible
1. Ensure the log file exists in `/opt/kirebos_networks/logs`.
2. Check file permissions.
3. If the file is missing, restart the service to generate new logs.
