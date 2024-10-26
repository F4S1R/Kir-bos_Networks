#!/bin/bash
echo "Setting up Kirebos Networks environment..."
cp .env.example .env
mkdir -p logs
chmod 700 logs
echo "Setup complete."
