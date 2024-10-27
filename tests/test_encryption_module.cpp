#include <cassert>
#include "encryption_module.h"

void test_encryption() {
    std::string original = "TestEncryptionData";
    std::string encrypted = encrypt_data(original);
    std::string decrypted = decrypt_data(encrypted);
    assert(decrypted == original);
    std::cout << "Encryption and decryption test passed." << std::endl;
}

int main() {
    test_encryption();
    return 0;
}
