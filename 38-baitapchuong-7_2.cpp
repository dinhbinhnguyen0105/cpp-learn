#include <iostream>
#include <string>

void input_integer(std::string label, int &n);
void input_array(int *arr, int size);
void print_array(int *arr, int size);
void append_array(int *&arr, int &size, int x, int y);

int main() {
    int n, x, y;
    input_integer("n = ", n);
    int *arr = new int[n];
    input_array(arr, n);
    input_integer("x = ", x);
    input_integer("y = ", y);
    append_array(arr, n, x, y);
    print_array(arr, n);
    return 0;
}

void input_integer(std::string label, int &n) {
    std::cout << label; std::cin >> n;
};
void input_array(int *arr, int size){
    for(int i = 0; i < size; i ++) std::cin >> arr[i];
};
void print_array(int *arr, int size) {
    for(int i = 0; i < size; i ++) std::cout << arr[i] << ' ';
};
void append_array(int *&arr, int &size, int x, int y) {
    int new_size = size + 1;
    int *new_array = new int[new_size];

    for(int i = 0; i < x; i ++) new_array[i] = arr[i];
    new_array[x] = y;
    for(int i = x + 1; i < new_size; i ++) new_array[i] = arr[i - 1];
    
    delete[] arr;
    arr = new_array;
    size = new_size;
};