#include <iostream>

int main() {
    std::cout << "Bai 1" << std::endl;
    {
        int n;
        std::cout << "Nhap so nguyen duong n: "; std::cin >> n;
        int total = 0;
        for(int i = 1; i <= n; i ++) {
            total += i;
        }
        std::cout << "S = " << total << std::endl;
    }
    std::cout << "Bai 2" << std::endl;
    {
        int n;
        std::cout << "Nhap so nguyen duong n: "; std::cin >> n;
        int total = 0;
        for(int i = 1; i <= n; i ++) {
            total += i * i;
        }
        std::cout << "S = " << total << std::endl;
    }
    std::cout << "Bai 3" << std::endl;
    {
        int n;
        std::cout << "Nhap so nguyen duong n: "; std::cin >> n;
        int result = n;
        for(int i = n - 1; i > 0; i --) {
            result = result * i;
        }
        std::cout << "n! = " << result << std::endl;
    }
    std::cout << "Bai 4" << std::endl;
    {
        int n;
        std::cout << "Nhap so nguyen duong n: "; std::cin >> n;
        for(int i = 1; i <= n; i ++) {
            if(i % 5 == 0) std::cout << i << ' ';
        }
        std::cout << std::endl;
    }

    return 0;
}