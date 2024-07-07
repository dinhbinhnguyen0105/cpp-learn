#include <iostream>
void func_a(int a, int b=0) {
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
}


int main() {
    func_a(1, 2);
    func_a(3);
    return 0;
}