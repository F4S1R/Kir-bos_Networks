#pragma once
#include <string>

class FlipPhoneLogger {
public:
    FlipPhoneLogger();
    ~FlipPhoneLogger();

    void logEvent(const std::string& event);
};
