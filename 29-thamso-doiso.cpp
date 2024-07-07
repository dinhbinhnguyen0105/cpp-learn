#include <iostream>

int sum(int a, int b){
    return a + b;
}

float avg(int *arr, int n) {
    
    int total = 0;
    for(int i = 0; i < n; i ++) {
        total += arr[i];
    }
    return (float) total/n;
}

float avg_2(int arr[3][3], int n, int m) {
    int total = 0;
    for(int i = 0; i < n; i ++) {
        for(int j = 0; j < m; j ++) {
            total += arr[i][j];
        }
    }
    return (float) total/(n * m);
}

int main() {
    // std::cout << sum(1 , 2) << std::endl;
    const int n = 5;
    int arr[n] = { 1, 2, 3, 4, 5 };
    std::cout << avg(arr, n) << std::endl;
    return 0;
}