#include <iostream>

bool kiemtrasonguyento(int n);
int tongcacsonguyento(int n);
int tinhgiaithua(int n);

int main() {
    std::cout << tinhgiaithua(3) << std::endl;
    return 0;
}

bool kiemtrasonguyento(int n) {
    for(int i = 2; i < n; i ++) {
        if(n % i == 0) return false;
    }
    return true;
}

int tongcacsonguyento(int n) {
    int sum = 0;
    for(int i = 2; i <= n; i ++) {
        if(kiemtrasonguyento(i)) sum += i;
    }

    return sum;
}

int tinhgiaithua(int n) {
    if(n == 1) return 1;
    return n * tinhgiaithua(n - 1);
}