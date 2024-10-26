#include "mobile_logger.h"
#include <iostream>

MobileLogger::MobileLogger() { /* Initialisation */ }
MobileLogger::~MobileLogger() { /* Nettoyage */ }

void MobileLogger::logEvent(const std::string &event) {
    std::cout << "Logging event: " << event << std::endl;
}

void MobileLogger::logError(const std::string &error) {
    std::cout << "Logging error: " << error << std::endl;
}

void MobileLogger::exportLogs() { /* Logic pour exporter les logs */ }
