#pragma once
#include <string>
#include <fstream>

class DesktopLogger {
public:
    DesktopLogger(const std::string& logFilePath);
    ~DesktopLogger();

    void logInfo(const std::string& message);    // Enregistre une information
    void logWarning(const std::string& message); // Enregistre un avertissement
    void logError(const std::string& message);   // Enregistre une erreur

private:
    std::string log_file_path;
    void writeLog(const std::string& level, const std::string& message);
};
