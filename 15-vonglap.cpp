#include <iostream>

int main() {
    std::cout << "For loop" << std::endl;
    for(int i = 0; i <= 10; i ++) {
        std::cout << "In ra i: " << i << std::endl;
    }
    std::cout << "While loop" << std::endl;
    int i = 0;
    while(i < 10) {
        if(i == 5) break;

        std::cout << "In ra i: " << i << std::endl;
        i ++;
    }
    std::cout << "Do-while loop" << std::endl;
    i = 0;
    do {
        std::cout << "In ra i: " << i << std::endl;
        i ++;
    } while (i < 0);

    return 0;
}