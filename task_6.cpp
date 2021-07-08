#include <iostream>

int firstArray(int arr[], int size);
int secondArray(int arr2[], int size);
int arrayResult(int arr[], int arr2[], int arr3[], int size);

int main() {
        const int size = 5;
        int arr[size], arr2[size], result[size];
        firstArray(arr, size);
        secondArray(arr2, size);
        arrayResult(arr, arr2, result, size);
        return 0;
}

int firstArray(int arr[], int size) {
        for(int i = 0; i < size; ++i){
            std::cin >> arr[i];
        }
        return 0;
}

int secondArray(int arr2[], int size) {
        for(int i = 0; i < size; ++i){
            std::cin >> arr2[i];
        } 
        return 0;
}

int arrayResult(int arr[], int arr2[], int arr3[], int size){
        for (int i = 0; i < size; ++i) {
            arr3[i] = arr[i] + arr2[i];
        }
        for (int i = 0; i < size; ++i) {
            std::cout << arr3[i];
        }
        return 0;
}
