# DMZ Advanced Setup Guide

## Introduction
This guide explains how to configure advanced options for the DMZ, including applying firewall rules, continuous monitoring, and setting up automatic failover in case of failure.

## Configuration Steps

### 1. Load Configuration
Ensure that the `dmz_advanced_config.yaml` file is correctly filled with firewall rules, monitoring parameters, and failover options.

### 2. Apply Firewall Rules
Use the `dmz_config.py` script to apply firewall rules according to the configuration file.

### 3. Set Up Automatic Failover
Automatic failover can be enabled in `dmz_advanced_config.yaml`. This feature provides redundancy in case the primary server fails.
