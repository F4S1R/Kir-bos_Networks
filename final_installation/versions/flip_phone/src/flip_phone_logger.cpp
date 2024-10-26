#include "flip_phone_logger.h"
#include <iostream>

FlipPhoneLogger::FlipPhoneLogger() { /* Initialisation */ }
FlipPhoneLogger::~FlipPhoneLogger() { /* Nettoyage */ }

void FlipPhoneLogger::logEvent(const std::string &event) {
    std::cout << "Logging event: " << event << std::endl;
}

void FlipPhoneLogger::logError(const std::string &error) {
    std::cout << "Logging error: " << error << std::endl;
}

void FlipPhoneLogger::exportLogs() { /* Logic pour exporter les logs */ }
