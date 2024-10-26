# Kirebos Networks Extended API Reference

## Introduction
This document provides detailed information on the extended API available in Kirebos Networks, allowing developers to create custom integrations with the project's advanced features.

## Available Endpoints

### /api/v1/dmz/monitor
**Description**: Enables real-time monitoring of the current DMZ status.
- **Method**: GET
- **Parameters**: None
- **Response**: JSON with status information.

### /api/v1/dmz/failover
**Description**: Activates the failover to the secondary IP in case of primary IP failure.
- **Method**: POST
- **Parameters**: `primary_ip`, `secondary_ip`
- **Response**: Confirmation of the failover.
