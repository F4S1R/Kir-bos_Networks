#!/bin/bash
echo "Running all mobile tests..."
./test_mobile_initialization
./test_touch_interactions
./test_orientation_changes
./test_network_connectivity
