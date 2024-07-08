#include <iostream>

struct Circle{
    int r;
    float PI;
    Circle() : PI(3.14) {}
    
    float circumference() {
        return 2*r*PI;
    }
    float circular() {
        return r*r*PI;
    }

    friend std::istream& operator>>(std::istream &is, Circle &c) {
        std::cout << "r = ";
        is >> c.r;
        return is;
    }
};

int main() {
    Circle c;
    std::cin >> c;
    std::cout << "Ban kinh duong tron: " << c.circumference() << std::endl;
    std::cout << "Dien tich duong tron: " << c.circular() << std::endl;

    return 0;
}