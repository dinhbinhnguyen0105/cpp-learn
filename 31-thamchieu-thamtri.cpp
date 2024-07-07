#include <iostream>
#include <string>
// tham tri 
// tham chieu => truyền địa chỉ ô nhớ => &x

void input_integer(std::string label, int n) {
    std::cout << label; std::cin >> n;
}

void change_array(int arr[], int n) {
    for(int i = 0; i < n; i ++) {
        arr[i] = i *2;
    }
}

int main() {
    int arr[] = {1,2,3,4,5};
    change_array(arr, 5);
    for(int i = 0; i < 5; i ++) std::cout << arr[i];
    return 0;
}