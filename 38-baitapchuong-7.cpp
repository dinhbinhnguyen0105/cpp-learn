#include <iostream>
#include <string>

void input_integer(std::string label, int &n);
void input_array(int *arr, int size);
void print_array(int *arr, int size);
void push(int *&arr, int &size, int new_element);

int main() {
    int n;
    input_integer("Nhap so luong phan tu trong mang: ", n);
    int *arr = new int[n];
    std::cout << "Mang: ";
    input_array(arr, n);
    int x;
    input_integer("Phan tu moi: ", x);
    push(arr, n, x);
    print_array(arr, n);
    return 0;
}

void input_integer(std::string label, int &n){
    std::cout << label;
    std::cin >> n;
};

void input_array(int *arr, int size) {
    for(int i = 0; i < size; i ++) std::cin >> arr[i];
};

void print_array(int *arr, int size) {
    for(int i = 0; i < size; i ++) std::cout << arr[i] << ' ';
};

void push(int *&arr, int &size, int new_element){
    int *new_arr = new int[size + 1];

    for(int i = 0; i < size; i ++) {
        new_arr[i] = arr[i];
    }
    new_arr[size] = new_element;

    delete[] arr;
    arr = new_arr;
    size = size + 1;
};
