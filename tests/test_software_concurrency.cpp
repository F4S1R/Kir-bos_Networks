#include <cassert>

void test_application_concurrency() {
    assert(check_resource_allocation("single_instance") == true);
    assert(check_resource_allocation("multiple_instances") == false);
    std::cout << "Application concurrency test passed." << std::endl;
}

int main() {
    test_application_concurrency();
    return 0;
}
