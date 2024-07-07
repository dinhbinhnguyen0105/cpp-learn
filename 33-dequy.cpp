#include <iostream>

void print_value(int a) {
    std::cout << "value = " << a <<  std::endl;
    if(a < 0) return;
    else {
        print_value(a - 1);
    }
}

int sum(int n);

int main() {
    // print_value(3);
    std::cout << sum(3) << std::endl;
    return 0;
}

int sum(int n) {
    if(n == 1) return 1;
    return n + sum(n - 1);
}