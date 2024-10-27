#include <cassert>

void test_network_permeability() {
    assert(check_network_access("authorized_user") == true);
    assert(check_network_access("unauthorized_user") == false);
    std::cout << "Software network permeability test passed." << std::endl;
}

int main() {
    test_network_permeability();
    return 0;
}
