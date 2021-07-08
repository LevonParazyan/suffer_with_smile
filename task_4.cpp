#include <iostream>

int reversedArray(int arr[], int start, int end);
int printArr(int arr[], int size);

int main() {
        const int size = 5;
        int arr[size];
        for(int i = 0; i < size; ++i) std::cin >> arr[i];
        reversedArray(arr, 0, size - 1);
        printArr(arr, size);
        return 0;
}

int printArr(int arr[], int size) {
        for(int i = 0; i < size; ++i){
            std::cout << arr[i] << " ";
        } 
        return 0;
}

int reversedArray(int arr[], int start, int end){
        if(start >= end) return 0;    
        int tmp = arr[start];
        arr[start] = arr[end];
        arr[end] = tmp;
        reversedArray(arr, start + 1, end - 1);
        return 0;
}
