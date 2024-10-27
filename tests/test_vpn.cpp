#include <cassert>

void test_vpn_security() {
    assert(establish_vpn_connection("secure_vpn_server") == true);
    assert(establish_vpn_connection("insecure_vpn_server") == false);
    std::cout << "VPN security test passed." << std::endl;
}

int main() {
    test_vpn_security();
    return 0;
}
