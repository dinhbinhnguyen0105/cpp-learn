#include <iostream>

int bai1() {
    int n;
    do {
        std::cout << "n = "; std::cin >> n;
    } while(n < 2 || n > 10);
    
    int numbers[n];
    std::cout << "Nhap mang: ";
    for(int i = 0; i < n; i ++) std::cin >> numbers[i];

    for(int i = n - 1; i > 0; i --) {
        for(int j = 0; j < i; j ++) {
            if(numbers[j] < numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
    for(int i = 0; i < n; i ++) std::cout << numbers[i] << ' ';

    return 0;
}

int main() {
    bai1();
    return 0;
}