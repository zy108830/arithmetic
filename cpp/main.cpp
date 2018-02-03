#include <iostream>
using namespace std;

void selectorSort(int arr[], int arr_length);

int main() {
    int arr[] = {7, 1, 9, 5, 3, 4, 8, 2, 6};
    int arr_length=9;
    selectorSort(arr, arr_length);
    for (int i = 0; i < arr_length; ++i) {
        std::cout << i << std::endl;
    }
    return 0;
}

void selectorSort(int arr[], int arr_length) {
    for (int i = 0; i < arr_length; i++) {
        int min_value = arr[i];
        for (int j = i + 1; j < arr_length; j++) {
            if (arr[j] < min_value) {
                swap(min_value, arr[j]);
            }
        }
    }
}