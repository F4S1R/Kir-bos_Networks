#pragma once

#include "desktop_connection.h"
#include "desktop_security.h"
#include "desktop_logger.h"

class DesktopManager {
public:
    DesktopManager();
    ~DesktopManager();

    void initialize();     // Initialisation des paramètres desktop
    void deploy();         // Déploiement local de l'application
    void backup();         // Sauvegarde des données
    void checkStatus();    // Vérifie l'état de l'application
    void rollback();       // Rollback en cas d'échec

private:
    DesktopConnection connection;
    DesktopSecurity security;
    DesktopLogger logger;
};
