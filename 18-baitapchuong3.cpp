#include <iostream>

int main() {
    std::cout << "Bai 1:" << std::endl;
    {
        int a, b;
        std::cout << "a = ";std::cin >> a;
        std::cout << "b = ";std::cin >> b;
        std::cout << "Ket qua la: ";
        if(a == 0 && b == 0) std::cout << "Phuong trinh co vo so nghiem" << std::endl;
        else if(a == 0 && b != 0) std::cout << "Phuong trinh vo nghiem" << std::endl;
        else {
            std::cout << "Nghiem cua phuong trinh la " << (-b / a) << std::endl;
        }
    }
    std::cout << "Bai 2:" << std::endl;
    {
        int n;
        do {
            std::cout << "n = "; std::cin >> n;
            int total = 0;
            for(int i = 1; i <= n; i ++ ) total += (i % 2 != 0) ? i : 0;
            std::cout << "Ket qua la: " << total << std::endl;
        } while (n < 1 || n > 100);
    }
    std::cout << "Bai 3:" << std::endl;
    {
        int degF = 0;
        std::cout << "F = "; std::cin >> degF;
        std::cout << "C = " << (float) (degF - 32) / 1.8;
    }
    std::cout << "Bai 4:" << std::endl;
    {
        int n;
        std::cout << "n = "; std::cin >> n;
        for(int i = 2; i < n; i ++) {
            if(n % i == 0){
                std::cout << n << " khong phai la so nguyen to" << std::endl;
                break;
            }
        }
        std::cout << n << " la so nguyen to" << std::endl;
    }
    std::cout << "Bai 5:" << std::endl;
    {
        int n;
        std::cout << "n = "; std::cin >> n;
        int total = 0;
        while(n > 1) {
            total += n%10;
            n /= 10;
        }
        std::cout << "Ket qua la " << total << std::endl;
    }

    return 0;
}