#include <iostream>

int main() {
    const int SO_HANG = 2;
    const int SO_COT = 3;

    {
        int arr[SO_HANG][SO_COT] = {
            { 1,2,3, },
            { 4,5,6, },
        };
    }
    {
        int arr[SO_HANG][SO_COT];
        for(int i = 0; i < 2; i ++) {
            for(int j = 0; j < 3; j ++) {
                arr[i][j] = i * j;
            }
        }
        for(int i = 0; i < SO_HANG; i ++) {
            for(int j = 0; j < SO_COT; j ++) {
                std::cout << arr[i][j] << ' ';
            }
            std::cout << std::endl;
        }

    }

    return 0;
}