#!/bin/bash
# Update DMZ Firewall Rules

echo "Updating firewall rules..."
sudo ufw allow from 192.168.1.0/24 to any port 22 proto tcp
sudo ufw deny from 192.168.2.0/24 to any port 22

if [ $? -eq 0 ]; then
    echo "Firewall rules updated successfully."
else
    echo "Failed to update firewall rules."
fi
