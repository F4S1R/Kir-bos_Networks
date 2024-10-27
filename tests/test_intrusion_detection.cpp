#include <cassert>
#include "intrusion_detection_system.h"

void test_intrusion_detection() {
    assert(detect_intrusion("normal_activity") == false);
    assert(detect_intrusion("suspicious_activity") == true);
    std::cout << "Intrusion detection test passed." << std::endl;
}

int main() {
    test_intrusion_detection();
    return 0;
}
