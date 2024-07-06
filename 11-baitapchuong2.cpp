#include <iostream>

int main() {
    // int a = 2, b = 3;
    // std::cout << "a = " << (a + b) << std::endl;
    // std::cout << "b = " << (a - b) << std::endl;

    //
    // char c;
    // std::cout << "Chu cai viet thuong: ";
    // std::cin >> c;
    // std::cout << "Chu cai viet hoa: " << (char) ((int) c - 32) << std::endl;

    //
    // int a, b;
    // std::cout << "Nhap gia tri cua a la "; std::cin >> a;
    // std::cout << "Nhap gia tri cua b la "; std::cin >> b;

    // int temp = a; a = b; b = temp;

    // std::cout << "Gia tri cua a la: " << a << std::endl;
    // std::cout << "Gia tri cua b la: " << b << std::endl;

    int a, b;
    std::cout << "a = "; std::cin >> a;
    std::cout << "b = "; std::cin >> b;

    int tong = a + b;
    int hieu = abs(a - b);
    std::cout << "Gia tri nho nhat: " << (tong - hieu) / 2;



    return 0;
}