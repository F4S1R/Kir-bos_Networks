#!/bin/bash
echo "Starting global deployment of Kirebos Networks..."

# Deploy desktop version
bash deploy_desktop.sh

# Deploy mobile version
bash deploy_mobile.sh

# Deploy tablet version
bash deploy_tablet.sh

# Deploy cloud version
bash deploy_cloud.sh

# Deploy flip phone version
bash deploy_flip_phone.sh

echo "Deployment completed successfully for all versions."
