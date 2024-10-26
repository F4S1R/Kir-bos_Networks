#!/bin/bash
# update.sh - Script to update Kirebos Networks

echo "Updating Kirebos Networks..."

# Step 1: Pull the latest changes
git pull origin main

# Step 2: Reinstall dependencies
echo "Reinstalling dependencies..."
if [ "$(uname)" == "Linux" ]; then
    sudo apt-get update
    sudo apt-get install -y libssl-dev qt5-default
elif [ "$(uname)" == "Darwin" ]; then
    brew install openssl qt
fi

# Step 3: Recompile the project
echo "Recompiling the project..."
make clean
make

echo "Kirebos Networks is up to date."
