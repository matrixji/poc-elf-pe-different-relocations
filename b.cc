#include "b.h"
#include <iostream>
#include "a.h"


void test_b() {
    auto &a = A::Instance();
    std::cout << "a address in test_b: " << (void *)(&a) << std::endl;
}
