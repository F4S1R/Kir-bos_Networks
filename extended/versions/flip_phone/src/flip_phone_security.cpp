#include "flip_phone_security.h"
#include <iostream>

FlipPhoneSecurity::FlipPhoneSecurity() : encryption_enabled(false) {}

FlipPhoneSecurity::~FlipPhoneSecurity() {}

void FlipPhoneSecurity::enableEncryption(bool enable) {
    encryption_enabled = enable;
    std::cout << (enable ? "Chiffrement activé." : "Chiffrement désactivé.") << std::endl;
}

bool FlipPhoneSecurity::isEncryptionEnabled() const {
    return encryption_enabled;
}
