#!/bin/bash
# Monitoring script for DMZ on Raspberry Pi
echo "Starting real-time monitoring for DMZ..."
# Exemple de commande de monitoring
top -b -n 1 | grep "cpu"
echo "DMZ monitoring active."
