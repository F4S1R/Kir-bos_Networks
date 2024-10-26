#pragma once
#include <string>

class ConfigLoader {
public:
    // Constructeur qui prend le chemin du fichier de configuration
    ConfigLoader(const std::string& filePath);
    
    // Destructeur
    ~ConfigLoader();

    // Méthode pour charger la configuration à partir du fichier
    bool loadConfig();

private:
    std::string config_file_path;  // Chemin du fichier de configuration
};
