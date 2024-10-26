#!/bin/bash
echo "Checking deployment status on cloud..."

# Vérifiez le statut des services déployés
# Exemple d'utilisation de curl pour vérifier le statut de l'API
endpoint=$(grep "endpoint" ../config/cloud_settings.yaml | awk '{print $2}')
echo "Pinging endpoint $endpoint..."

response=$(curl -s -o /dev/null -w "%{http_code}" $endpoint)
if [ "$response" == "200" ]; then
    echo "Deployment is running correctly."
else
    echo "Deployment might have issues. Status code: $response"
fi
