#pragma once
#include <string>
#include <fstream>

class CloudLogger {
public:
    CloudLogger(const std::string& logFilePath);
    ~CloudLogger();

    void logInfo(const std::string& message);    // Enregistre une information
    void logWarning(const std::string& message); // Enregistre un avertissement
    void logError(const std::string& message);   // Enregistre une erreur

private:
    std::ofstream log_file;  // Fichier de log
    void writeLog(const std::string& level, const std::string& message);
};
