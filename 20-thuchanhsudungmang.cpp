#include <iostream>

int main() {

    std::cout << "Bai 1:" << std::endl;
    {
        int n;
        std::cout << "Nhap so nguyen duong < 10: "; std::cin >> n;
        int numbers[n];
        int x;
        std::cout << "Nhap so nguyen duong x: "; std::cin >> x;
        numbers[n - 1] = x;
        std::cout << numbers[n-1] << std::endl;
    }
    std::cout << "Bai 2:" << std::endl;
     
    
    return 0;
}