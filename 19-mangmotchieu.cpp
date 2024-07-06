#include <iostream>

int main() {
    {
        int numbers[5];
    }
    {
        int numbers[5] = {1,2,3,4,5};
        std::cout << numbers << std::endl;
    }
    {
        int numbers[5];
        for(int i = 0; i < 5; i ++) {
            std::cin >> numbers[i];
        }
        for(int i = 0; i < 5; i ++) {
            std::cout << "Gia tri thu "<< i + 1 << " cua mang: " << numbers[i] << std::endl;
        }
    }

    return 0;
}