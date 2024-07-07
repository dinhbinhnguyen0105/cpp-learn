#include <iostream>

/**
 * Stack: lưu trữ các biến cục bộ. Tốc độ truy xuất nhanh, giới hạn lưu trữ thấp hơn heap
 * int main() {
        int a = 4;
        int b[5];
        
        return 0; 
    }
 * Heap: lưu trữ các biến toàn cục, các đối tượng con trỏ khi được cấp phát động.
        - không được tự giải phóng (delete a)
    int main() {
        int *a = new int(4);
        int *b = new int[5];

        delete a;
        delete b;

        return 0; 
    }
 */

int main() {
    int *a = new int(4);
    int *b = new int[5];

    delete a;
    delete b;

    return 0; 
}