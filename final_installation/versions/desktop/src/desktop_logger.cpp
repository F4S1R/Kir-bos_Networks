#include "desktop_logger.h"
#include <iostream>

DesktopLogger::DesktopLogger() { /* Initialisation */ }
DesktopLogger::~DesktopLogger() { /* Nettoyage */ }

void DesktopLogger::logEvent(const std::string &event) {
    std::cout << "Logging event: " << event << std::endl;
}

void DesktopLogger::logError(const std::string &error) {
    std::cout << "Logging error: " << error << std::endl;
}

void DesktopLogger::exportLogs() { /* Logic pour exporter les logs */ }
