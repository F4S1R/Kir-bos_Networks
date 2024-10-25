
    #pragma once
    class TabletManager {
    public:
        void manage();
    private:
        void createTabletConnection();
        void destroyTabletConnection();
    };