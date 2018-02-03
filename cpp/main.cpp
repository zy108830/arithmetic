#include <iostream>
using namespace std;


template <typename T>

void selectorSort(T arr[], int arr_length) {
    for (int i = 0; i < arr_length; i++) {
        int min_value = arr[i];
        for (int j = i + 1; j < arr_length; j++) {
            if (arr[j] < min_value) {
                min_value=arr[j];
                swap(arr[i], arr[j]);
            }
        }
    }
}

int main() {
    int arr[] = {7, 1, 9, 5, 3, 4, 8, 2, 6};
    int arr_length=9;
    std::cout<<"排序后"<<" ";
    selectorSort(arr, arr_length);
    for (int i = 0; i < arr_length; i++) {
        std::cout << arr[i] << " ";
    }
    return 0;
}