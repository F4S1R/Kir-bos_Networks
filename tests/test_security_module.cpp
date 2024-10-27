#include "security_module.h"
#include <cassert>

void test_encryption_decryption() {
    SecurityModule sm;
    std::string secret = "test";
    std::string encrypted = sm.encrypt(secret);
    std::string decrypted = sm.decrypt(encrypted);
    assert(secret == decrypted);
}

void test_ssl_tls() {
    SecurityModule sm;
    assert(sm.setupSSL() == true);
    assert(sm.setupTLS() == true);
}

int main() {
    test_encryption_decryption();
    test_ssl_tls();
    return 0;
}
