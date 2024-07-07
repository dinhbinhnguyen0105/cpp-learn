#include <iostream>
#include <string>

void input_integer(std::string label, int &n);
void input_array(int *arr, int size);
void output_array(int *arr, int size);
void sort_array(int *&arr, int size);

int main() {
    int n;
    input_integer("n = ", n);
    std::cout << "Mang: ";
    int *arr = new int[n];
    input_array(arr, n);
    sort_array(*&arr, n);
    std::cout << "Sorted: ";
    output_array(arr, n);


    return 0;
}

void input_integer(std::string label, int &n) {
    std::cout << label; std::cin >>n;
};
void input_array(int *arr, int size) {
    for(int i = 0; i < size; i ++) std::cin >> arr[i];
};
void output_array(int *arr, int size) {
    for(int i = 0; i < size; i ++) std::cout << arr[i] << ' ';
};
void sort_array(int *&arr, int size) {
    int *new_array  = new int[size];
    for(int i = 0; i < size; i ++) {
        for(int j = size - 1; j > i; j --) {
            if(arr[j] > arr[j - 1]) {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
        new_array[i] = arr[i];
    }
    delete[] arr;
    arr = new_array;
    for (int i = 0; i < size; i ++) std::cout << arr[i] << ' ';
};


// 6 12 5 7 81 2 3


// 12 6 5 7 81 2 3     j = 0,
// 12 6 5 7 81 2 3     j = 1,
// 12 6 7 5 81 2 3
// 12 6 7 81 5 2 3
// 12 6 7 81 5 2 3

// 12 7 6 81 5 2 3
// 12 7 81 6 5 2 3
// 12 7 81 6 5 3 2



// int arr[5] = { 1, 2, 3, 4, 5 };
// int *arr = new int[5];
// delete[] arr;