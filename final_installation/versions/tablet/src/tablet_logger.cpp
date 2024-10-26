#include "tablet_logger.h"
#include <iostream>

TabletLogger::TabletLogger() { /* Initialisation */ }
TabletLogger::~TabletLogger() { /* Nettoyage */ }

void TabletLogger::logEvent(const std::string &event) {
    std::cout << "Logging event: " << event << std::endl;
}

void TabletLogger::logError(const std::string &error) {
    std::cout << "Logging error: " << error << std::endl;
}

void TabletLogger::exportLogs() { /* Logic pour exporter les logs */ }
