#pragma once

class DesktopLogger {
public:
    DesktopLogger();
    ~DesktopLogger();

    void logEvent(const std::string &event);
    void logError(const std::string &error);
    void exportLogs();
};
