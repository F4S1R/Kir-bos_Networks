#pragma once
#include <string>

class FlipPhoneLogger {
public:
    FlipPhoneLogger(const std::string& logFilePath);
    ~FlipPhoneLogger();

    void logInfo(const std::string& message);
    void logError(const std::string& message);

private:
    std::string log_file_path;
    void writeLog(const std::string& level, const std::string& message);
};
