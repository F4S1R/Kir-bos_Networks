#ifndef NETWORK_MODULE_H
#define NETWORK_MODULE_H

class NetworkModule {
public:
    NetworkModule();
    void initialize();
    void connectToNetwork();
    void disconnectFromNetwork();
    void checkNetworkStatus();
};

#endif // NETWORK_MODULE_H
