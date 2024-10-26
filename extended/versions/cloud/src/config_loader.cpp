#include "config_loader.h"
#include <iostream>
#include <fstream>

ConfigLoader::ConfigLoader(const std::string& filePath) : config_file_path(filePath) {}

ConfigLoader::~ConfigLoader() {}

bool ConfigLoader::loadConfig() {
    std::ifstream config_file(config_file_path);
    if (!config_file.is_open()) {
        std::cerr << "Unable to open config file: " << config_file_path << std::endl;
        return false;
    }

    std::string line;
    while (std::getline(config_file, line)) {
        std::cout << "Config Line: " << line << std::endl;
        // Charger et traiter chaque ligne de configuration
    }

    config_file.close();
    return true;
}
