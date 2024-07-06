#include <iostream>

int main () {
    const int n = 7;
    int numbers[n] = { 6, 9, 2, 3 , 5, 1, 10 };
    for(int i = n - 1; i > 0; i --) {
        for(int j = 0; j < i; j ++) {
            if(numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    for(int i = 0; i < n; i ++) std::cout << numbers[i] << " ";

    return 0;
}

// 6 9 2 3 5

// 6 9 2 3 5
// 6 2 9 3 5
// 6 2 3 9 5
// 6 2 3 5 9

// 6 2 3 5
// 2 6 3 5
// 2 3 6 6
// 2 3 5 5

