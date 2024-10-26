#!/bin/bash
# Deployment script for Kirebos Networks production versions

echo "Deploying Kirébos Networks production versions..."

# Function to deploy a specific version
deploy_version() {
  version=$1
  echo "Deploying version: $version"

  # Create directories for logs and config specific to the version
  mkdir -p /opt/kirebos/$version/logs
  mkdir -p /opt/kirebos/$version/config

  # Copy configuration files for the version
  cp config/$version/*.yaml /opt/kirebos/$version/config/

  # Run initialization script for the specific version
  if [ "$version" == "desktop" ]; then
    bash versions/desktop/init_desktop.sh
  elif [ "$version" == "mobile" ]; then
    bash versions/mobile/init_mobile.sh
  elif [ "$version" == "cloud" ]; then
    bash versions/cloud/init_cloud.sh
  elif [ "$version" == "tablet" ]; then
    bash versions/tablet/init_tablet.sh
  elif [ "$version" == "flip_phone" ]; then
    bash versions/flip_phone/init_flip.sh
  fi

  echo "$version deployed successfully."
}

# Deploy each version
deploy_version "desktop"
deploy_version "mobile"
deploy_version "cloud"
deploy_version "tablet"
deploy_version "flip_phone"

echo "All versions deployed successfully in production."
