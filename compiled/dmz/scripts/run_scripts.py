# Compiled/DMZ/scripts/run_scripts.sh
echo "Running DMZ Initialization Script..."
python3 initialize_dmz.py

echo "Loading Configuration..."
python3 config_loader.py
