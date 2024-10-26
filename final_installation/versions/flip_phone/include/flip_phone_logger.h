#pragma once

class FlipPhoneLogger {
public:
    FlipPhoneLogger();
    ~FlipPhoneLogger();

    void logEvent(const std::string &event);
    void logError(const std::string &error);
    void exportLogs();
};
