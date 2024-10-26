#include "flip_phone_logger.h"
#include <iostream>
#include <fstream>
#include <ctime>

FlipPhoneLogger::FlipPhoneLogger(const std::string& logFilePath) : log_file_path(logFilePath) {}

FlipPhoneLogger::~FlipPhoneLogger() {}

void FlipPhoneLogger::logInfo(const std::string& message) {
    writeLog("INFO", message);
}

void FlipPhoneLogger::logError(const std::string& message) {
    writeLog("ERROR", message);
}

void FlipPhoneLogger::writeLog(const std::string& level, const std::string& message) {
    std::ofstream log_file(log_file_path, std::ios::app);
    if (log_file.is_open()) {
        std::time_t now = std::time(nullptr);
        log_file << "[" << std::ctime(&now) << "] " << level << ": " << message << std::endl;
        log_file.close();
    }
}
