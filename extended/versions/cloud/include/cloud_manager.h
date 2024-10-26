#pragma once

#include "cloud_connection.h"
#include "cloud_security.h"
#include "cloud_logger.h"

class CloudManager {
public:
    CloudManager();
    ~CloudManager();

    void initialize();     // Initialisation des paramètres cloud
    void deploy();         // Déploiement de l'application
    void backup();         // Sauvegarde des données
    void checkStatus();    // Vérifie l'état du déploiement
    void rollback();       // Rollback en cas d'échec

private:
    CloudConnection connection;  // Gestion de la connexion cloud
    CloudSecurity security;      // Gestion de la sécurité cloud
    CloudLogger logger;          // Journalisation pour le cloud
};
