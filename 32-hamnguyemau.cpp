#include <iostream>
#include <string>

int sum(int a, int b);
void print_message(std::string st);

int main() {
    std::cout << sum(1, 2) << std::endl;
    print_message("Hello world");
    return 0;
}

int sum(int a, int b) {
    return a + b;
}
void print_message(std::string str) {
    std::cout << str << std::endl;
}