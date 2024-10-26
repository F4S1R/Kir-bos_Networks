#!/bin/bash
# Enhanced Deployment Script

# Log start time
echo "$(date '+%Y-%m-%d %H:%M:%S') - Starting deployment..." | tee deploy.log

# Check dependencies
echo "Checking dependencies..."
if ! command -v git &> /dev/null
then
    echo "Git is not installed, aborting deployment." | tee -a deploy.log
    exit 1
fi

# Pull latest updates from Git
echo "Pulling latest updates from Git..."
git pull origin master | tee -a deploy.log

# Check for successful pull
if [ $? -eq 0 ]; then
    echo "Updates pulled successfully." | tee -a deploy.log
else
    echo "Failed to pull updates." | tee -a deploy.log
    exit 1
fi

# Deploy the application
echo "Deployin
