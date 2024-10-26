#!/bin/bash
# deploy.sh - Script to deploy Kirebos Networks

echo "Starting deployment of Kirebos Networks..."

# Step 1: Pull the latest version from the repository
git pull origin main

# Step 2: Install dependencies
echo "Installing dependencies..."
if [ "$(uname)" == "Linux" ]; then
    sudo apt-get update
    sudo apt-get install -y libssl-dev qt5-default
elif [ "$(uname)" == "Darwin" ]; then
    brew install openssl qt
fi

# Step 3: Compile the project
echo "Compiling the project..."
make clean
make

# Step 4: Start the application
echo "Deployment completed. Starting the application..."
./bin/main_desktop

echo "Deployment of Kirebos Networks is complete."
