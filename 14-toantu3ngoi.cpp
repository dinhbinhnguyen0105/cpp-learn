#include <iostream>

int main() {
    int a = 1;
    int b = 2;

    int c = (a > b) ? a : b;

    std::cout << c << std::endl;

    return 0;
}