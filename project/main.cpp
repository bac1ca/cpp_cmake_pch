#include <iostream>

// NOTE: in main.cpp there is no explicit include of common.h,
// but it uses PCH_DEFINED_VALUE and std::vector

int main() {
    std::vector<int> v;
    v.clear();

    std::cout << "Hello, World! - " << PCH_DEFINED_VALUE << std::endl;
    return 0;
}