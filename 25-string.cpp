#include <string>
#include <iostream>

int ex1() {
    std::string str;
    std::cout << "Nhap chuoi: ";
    std::cin >> str;
    std::cout << "Chuoi vua nhap: " << str << std::endl;
    return 0;
}

int ex2() {
    std::string str;
    std::cout << "Nhap chuoi: ";
    getline(std::cin, str);
    std::cout << "Chuoi vua nhap: " << str << std::endl;
    return 0;
}

int ex3() {
    int n = 0;
    std::string str;
    std::cout << "Nhap so: "; std::cin >> n;
    std::cin.ignore();
    std::cout << "Nhap chuoi: ";
    getline(std::cin, str);

    std::cout << "So vua nhap: " << n << std::endl;
    std::cout << "Chuoi vua nhap: " << str << std::endl;
    return 0;
}

int main() {
    ex3();

    return 0;
}