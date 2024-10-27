#include <cassert>
#include <iostream>

// Simulated function to check process integrity
bool verify_process_integrity(const std::string& process_id) {
    // Simulate a check on the process integrity
    if (process_id == "critical_process") {
        return true; // Assuming the process is running without tampering
    } else {
        return false; // Assuming the process is compromised
    }
}

void test_process_integrity() {
    assert(verify_process_integrity("critical_process") == true);
    assert(verify_process_integrity("compromised_process") == false);
    std::cout << "Process integrity test passed for critical processes." << std::endl;
}

int main() {
    test_process_integrity();
    return 0;
}
