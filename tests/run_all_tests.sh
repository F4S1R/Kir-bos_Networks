#!/bin/bash

echo "Début de l'exécution de tous les tests..."

# Exécuter des tests de réseau
echo "Exécution des tests d'intégrité des processus..."
./test_network_manager.cpp

echo "Tous les tests ont été exécutés."

# Exécuter les tests de module réseau
echo "Exécution des tests du module réseau..."
./test_network_module.cpp

# Exécuter les tests du module de sécurité
echo "Exécution des tests du module de sécurité..."
./test_security_module.cpp

# Exécuter les tests de charge du réseau
echo "Exécution des tests de charge du réseau..."
./tests_network_load.cpp

# Exécuter les tests SSL/TLS
echo "Exécution des tests SSL/TLS..."
./tests_ssl_tls_security.cpp

# Exécuter les tests de redondance et de failover
echo "Exécution des tests de redondance et failover..."
./tests_redundancy.cpp

# Exécuter les tests des protocoles DHCP, SSL, TLS
echo "Exécution des tests de protocole DHCP..."
./test_dhcp_protocol.cpp

echo "Exécution des tests de protocole SSL..."
./test_ssl_protocol.cpp

echo "Exécution des tests de protocole TLS..."
./test_tls_protocol.cpp

# Exécuter des tests supplémentaires de sécurité, de cryptage et d'intégrité des processus
echo "Exécution des tests d'intégrité des processus..."
./test_process_integrity.cpp

echo "Tous les tests ont été exécutés."

# Exécuter des tests du VPN
echo "Exécution des tests d'intégrité des processus..."
./test_vpn.cpp

echo "Tous les tests ont été exécutés."

# Exécuter des tests de concurrence software
echo "Exécution des tests d'intégrité des processus..."
./test_software_concurrency.cpp

echo "Tous les tests ont été exécutés."

# Exécuter des tests de permeabilité
echo "Exécution des tests d'intégrité des processus..."
./test_software_permeability.cpp

echo "Tous les tests ont été exécutés."

# Exécuter des tests cryptographiques
echo "Exécution des tests d'intégrité des processus..."
./test_encryption_module.cpp

echo "Tous les tests ont été exécutés."

# Exécuter des tests de détection d'intrusion
echo "Exécution des tests d'intégrité des processus..."
./test_intrusion_detection.cpp

echo "Tous les tests ont été exécutés."

# Exécuter des tests stabilité de l'application
echo "Exécution des tests d'intégrité des processus..."
./test_application_resilience.cpp

echo "Tous les tests ont été exécutés."