#include <iostream>

int global_var = 3;

int main() {
    int main_var = 0;
    {
        int scope_var_1 = 1;
        std::cout << scope_var_1 << std::endl;
        {
            std::cout << scope_var_1 << std::endl;
        }
    }
    {
        std::cout << main_var << std::endl;
    }

    return 0;
}