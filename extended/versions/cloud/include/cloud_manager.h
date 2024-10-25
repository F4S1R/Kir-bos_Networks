
    #pragma once
    class CloudManager {
    public:
        void manage();
    private:
        void createCloudConnection();
        void destroyCloudConnection();
    };