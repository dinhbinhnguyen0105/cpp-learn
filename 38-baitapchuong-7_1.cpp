#include <iostream>
#include <string>

void input_integer(std::string label, int &n);
void input_array(int *arr, int size);
void print_array(int *arr, int size);
void delete_item(int *&arr, int &size, int x);


int main() {
    int n, x;
    input_integer("n = ", n);
    int *arr = new int[n];
    input_array(arr, n);
    input_integer("x = ", x);
    delete_item(arr, n, x);
    print_array(arr, n);

    return 0;
}

void input_integer(std::string label, int &n) {
    std::cout << label; std::cin >> n;
};

void input_array(int *arr, int size) {
    std::cout << "Nhap mang: ";
    for(int i = 0; i < size; i ++) {
        std::cin >> arr[i];
    }
};
void print_array(int *arr, int size) {
    for(int i = 0; i < size; i ++) {
        std::cout << arr[i] << ' ';
    }
};
void delete_item(int *&arr, int &size, int x) {
    int new_size = size - 1;
    int *new_arr = new int[new_size];
    for(int i = 0; i < size; i ++) {
        if(i == x) continue;
        else {
            new_arr[i] = arr[i];
        }
    }
    delete[] arr;
    arr = new_arr;
    size = new_size;
};