#include <iostream>

int main() {
    int n;
    std::cout << "Nhap so nguyen duong < 10: "; std::cin >> n;
    int numbers[n];
    int x;
    std::cout << "Nhap so nguyen duong x: "; std::cin >> x;
    numbers[n - 1] = x;

    // for(int i = 0; i < sizeof())

    std::cout << numbers[n-1] << std::endl;
    std::cout << sizeof(numbers);

    return 0;
}