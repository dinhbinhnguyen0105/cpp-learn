#include <iostream>

int bai1() {
    int n, m;
    do {
        std::cout << "n = "; std::cin >> n;
        std::cout << "m = "; std::cin >> m;
    } while(0 > n && n > 10 && 0 > m && m > 10);
    int my_arr[n][m];
    std::cout << "Nhap mang: " << std::endl;

    int total = 0;
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < m; j++) {
            std::cin >> my_arr[i][j];
            total += my_arr[i][j];
        }
        std::cout << std::endl;
    }

    std::cout << "Tong cac phan tu trong mang la: " << total;
    return 1;
}

int bai2() {
    int n;
    do {
        std::cout << "n = "; std::cin >> n;
    }while (n < 0 && n > 10);

    int my_list[n];
    int max = 0;
    std::cout << "Nhap mang: ";
    for(int i = 0; i < n; i ++) {
        std::cin >> my_list[i];
        if(my_list[i] >= max) max = my_list[i];
    }
    std::cout << "Gia tri lon nhat la: " << max << std::endl;
    

    return 1;
}

int bai3() {
    int n, m;
    do {
        std::cout << "n = "; std::cin >> n;
        std::cout << "m = "; std::cin >> m;
    } while(n < 0 && n > 10 && m < 0 && m > 10);
    int my_list[n][m];
    int max_list[n];
    std::cout << "Nhap mang: " << std::endl;
    for(int i = 0; i < n; i ++) {
        int max = 0;
        for(int j = 0; j < m; j ++) {
            std::cin >> my_list[i][j];
            if(my_list[i][j] > max) {
                max = my_list[i][j];
            }
        }
        std::cout << std::endl;
        max_list[i] = max;
    }

    std::cout << "Cac phan tu lon nhat la: ";
    for(int i = 0; i < n; i ++) std::cout << max_list[i] << " ";


    return 0;
}

int bai4() {
    int n, m;
    do {
        std::cout << "n = "; std::cin >> n;
        std::cout << "m = "; std::cin >> m;
    } while(n < 2 && n > 10 && m < 2 && m > 10);
    
    int my_list[n][m];
    int total = 0;
    std::cout << "Nhap mang: " << std::endl;
    for(int i = 0; i < n; i ++) {
        for(int j = 0; j < m; j ++) {
            std::cin >> my_list[i][j];

            if(i == 0 || i == n-1 || j == 0 ||j == m -1) total += my_list[i][j];
        }
    }
    std::cout << "Tong cacs gia tri bien la: " << total << std::endl;

    return 0;
}

int main() {
    // bai1();
    // bai2();
    // bai3();
    bai4();

    return 0;
}