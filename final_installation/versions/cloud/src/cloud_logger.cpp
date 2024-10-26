#include "cloud_logger.h"
#include <iostream>

CloudLogger::CloudLogger() { /* Initialisation */ }
CloudLogger::~CloudLogger() { /* Nettoyage */ }

void CloudLogger::logEvent(const std::string &event) {
    std::cout << "Logging event: " << event << std::endl;
}

void CloudLogger::logError(const std::string &error) {
    std::cout << "Logging error: " << error << std::endl;
}

void CloudLogger::exportLogs() { /* Logic pour exporter les logs */ }
