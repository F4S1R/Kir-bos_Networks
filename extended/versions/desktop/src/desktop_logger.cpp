#include "desktop_logger.h"
#include <iostream>
#include <fstream>
#include <ctime>

DesktopLogger::DesktopLogger(const std::string& logFilePath) : log_file_path(logFilePath) {}

DesktopLogger::~DesktopLogger() {}

void DesktopLogger::logInfo(const std::string& message) {
    writeLog("INFO", message);
}

void DesktopLogger::logWarning(const std::string& message) {
    writeLog("WARNING", message);
}

void DesktopLogger::logError(const std::string& message) {
    writeLog("ERROR", message);
}

void DesktopLogger::writeLog(const std::string& level, const std::string& message) {
    std::ofstream log_file(log_file_path, std::ios::app);
    if (log_file.is_open()) {
        std::time_t now = std::time(nullptr);
        log_file << "[" << std::ctime(&now) << "] " << level << ": " << message << std::endl;
        log_file.close();
    }
}
