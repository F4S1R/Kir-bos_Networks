#pragma once
#include <string>

class MobileLogger {
public:
    MobileLogger();
    ~MobileLogger();

    void logEvent(const std::string& event);
    void logError(const std::string& error);
};
