#include "network_manager.h"
#include <cassert>

void test_connection() {
    NetworkManager nm;
    assert(nm.connect() == true);  // Assume connect returns a boolean
    assert(nm.disconnect() == true);
}

void test_error_handling() {
    NetworkManager nm;
    assert(nm.handleError(404) == "Not Found");
    assert(nm.handleError(500) == "Server Error");
}

int main() {
    test_connection();
    test_error_handling();
    return 0;
}
