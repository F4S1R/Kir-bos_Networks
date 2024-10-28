#include <iostream>
#include <curl/curl.h>

// Fonction pour envoyer une requête HTTP POST
void sendHttpRequest(const std::string& url, const std::string& data) {
    CURL* curl = curl_easy_init();
    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, data.c_str());

        CURLcode res = curl_easy_perform(curl);
        if (res != CURLE_OK) {
            std::cerr << "Erreur requête HTTP : " << curl_easy_strerror(res) << std::endl;
        } else {
            std::cout << "Requête envoyée avec succès à : " << url << std::endl;
        }

        curl_easy_cleanup(curl);
    }
}

int main() {
    // URL de l'API et données de test
    std::string url = "https://api.example.com/notify";
    std::string data = "email=admin@example.com&message=Installation réussie";

    sendHttpRequest(url, data);
    return 0;
}
