#pragma once

class CloudLogger {
public:
    CloudLogger();
    ~CloudLogger();

    void logEvent(const std::string &event);
    void logError(const std::string &error);
    void exportLogs();
};
