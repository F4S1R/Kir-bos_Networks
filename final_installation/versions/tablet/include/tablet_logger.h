#pragma once

class TabletLogger {
public:
    TabletLogger();
    ~TabletLogger();

    void logEvent(const std::string &event);
    void logError(const std::string &error);
    void exportLogs();
};
