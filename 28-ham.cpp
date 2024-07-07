#include <iostream>
#include <string>

void print_message(std::string message) {
    std::cout << message << std::endl;
}

bool kiem_tra_so_nguyen_to(int x) {
    for(int i = 2; i < x; i ++) {
        if(x % i == 0) return false;
    }

    return true;
}

int main() {
    // print_message("Hello world");
    int x;
    std::cout << "x = "; std::cin >> x;
    std::cout << kiem_tra_so_nguyen_to(x) << std::endl;
    return 0;
}

