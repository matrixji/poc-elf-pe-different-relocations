#include <iostream>
#include "a.h"
#include "b.h"

void test_c() {
    auto &a = A::Instance();
    std::cout << "a address in test_c: " << (void *)(&a) << std::endl;
}


int main() {
    test_b();
    test_c();
    return 0;
}
