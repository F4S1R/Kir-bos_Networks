#!/bin/bash
echo "Restoring backup..."
tar -xzvf $1 -C /
echo "Restoration complete."
