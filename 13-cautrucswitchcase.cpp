#include <iostream>

int main() {
    int a = 1;
    
    switch(a) {
        case 1:
            std::cout << 1;
            break;
        case 2:
            std::cout << 2;
            break;
        case 3:
            std::cout << 3;
            break;
        default:
            std::cout << "Default";
    }

    return 0;
}