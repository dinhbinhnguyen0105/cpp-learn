#include <iostream>

int main () {
    if(true) {
        std::cout << "Dieu kien dung" << std::endl;
    } else {
        std::cout << "Dieu kien sai" << std::endl;
    }

    int a = 3, b = 2;

    if((a % b) == 0) {
        std::cout << "a chia het cho b" << std::endl;
    } else {
        std::cout << "a khong chia het cho b" << std::endl;
    }

    return 0;
}