#!/bin/bash
# Check DMZ Status

echo "Checking DMZ status..."
ping -c 1 <DMZ_HOST_IP>

if [ $? -eq 0 ]; then
    echo "DMZ is operational."
else
    echo "DMZ is down! Immediate attention required."
fi
