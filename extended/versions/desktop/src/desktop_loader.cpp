#include "config_loader.h"
#include <iostream>
#include <fstream>

ConfigLoader::ConfigLoader(const std::string& filePath) : config_file_path(filePath) {}

ConfigLoader::~ConfigLoader() {}

bool ConfigLoader::loadConfig() {
    std::ifstream config_file(config_file_path);
    if (!config_file.is_open()) {
        std::cerr << "Impossible d'ouvrir le fichier de configuration : " << config_file_path << std::endl;
        return false;
    }

    std::string line;
    while (std::getline(config_file, line)) {
        std::cout << "Ligne de configuration : " << line << std::endl;
        // Traitement de chaque ligne de configuration
    }

    config_file.close();
    return true;
}
