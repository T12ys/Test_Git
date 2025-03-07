#include <iostream>

void featureOne() {
    std::cout << "Feature One is active!" << std::endl;
}

int main() {
    std::cout << "Hello from main branch!" << std::endl;
    featureOne();
    return 0;
}