#pragma once
#include <string>

class DesktopLogger {
public:
    DesktopLogger();
    ~DesktopLogger();

    void logEvent(const std::string& event);
    void logError(const std::string& error);
};
