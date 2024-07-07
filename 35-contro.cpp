#include <iostream>

void change_value(int *n) {
    std::cin >> *n;
}

int main() {
    {
        int n = 4;
        int *n_ptr = &n; //Khai báo biến con trỏ bằng *, cùng kiểu dữ liệu với dữ liệu con trỏ quản lý
        std::cout << *n_ptr << std::endl; // Lấy dữ liệu mà con trỏ quản lý bằng *
    }
    {
        int numbers[4] = { 1,2,3,4 };
        int *i_ptr;

        for(i_ptr = &numbers[0]; i_ptr < &numbers[0] + 4; i_ptr ++) {
            std::cout << *i_ptr << ' ';
        }
    }
    {
        int n = 5;
        change_value(&n);

        std::cout << "n = " << n;
    }

    return 0;
}