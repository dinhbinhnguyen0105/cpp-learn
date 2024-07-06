#include <iostream>

int main() {
    int i = 16; // gan
    int j = 18;

    int a = 1 + 2;
    int b = 3 / 2;
    float f = 3.0 / 2.0;
    // int next_age = j ++;
    int next_age = ++j;

    std::cout << j << std::endl;
    std::cout << j << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << f << std::endl;
    std::cout << next_age << std::endl;

    return 0;
}