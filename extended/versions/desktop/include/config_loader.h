#pragma once
#include <string>

class ConfigLoader {
public:
    ConfigLoader(const std::string& filePath);  // Constructeur avec chemin du fichier de configuration
    ~ConfigLoader();

    bool loadConfig();  // Charge la configuration depuis le fichier

private:
    std::string config_file_path;
};
