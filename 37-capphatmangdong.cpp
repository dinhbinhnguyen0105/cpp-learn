#include <iostream>

int main() {
    int a[3]; // cấp phát mảng tĩnh.
    int *b = new int[3]; // cấp phát mảng động. 

    for(int i = 0; i < 3; i ++) {
        b[i] = 1;
    }
    std::cout << "Mang cu: ";
    for(int i = 0; i < 3; i ++) std::cout << b[i] << ' ';

    int *new_array = new int[4];
    for(int i = 0; i < 3; i ++) {
        new_array[i] = b[i];
    }
    new_array[4] = 2;
    delete[] b;
    b = new_array;
    std::cout << "Mang moi: ";
    for(int i = 0; i < 4; i ++) std::cout << b[i] << ' ' ;
    // delete[] new_array;
    std::cout << std::endl;
    return 0;
}