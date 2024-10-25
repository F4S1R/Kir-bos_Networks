
    #pragma once
    class DesktopManager {
    public:
        void manage();
    private:
        void createNetworkConnection();
        void destroyNetworkConnection();
    };