#!/bin/bash
echo "Cleaning old logs..."
find /path/to/logs -type f -name "*.log" -mtime +30 -exec rm {} \;
echo "Log cleanup complete."
