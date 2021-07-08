#include <iostream>

int sumOfTwo(int arr[], int size);

int main() {
        const int size = 5;
        int arr[size];
        for(int i = 0; i < size; ++i) std::cin >> arr[i];
        sumOfTwo(arr, size);
        return 0;
}

int sumOfTwo(int arr[], int size){
        int max, min;
        min = arr[0];
        max = arr[0];
        for(int i = 1; i < size; ++i){
            if(max < arr[i]) {
                max = arr[i];
            }
            else if(min > arr[i]) {
                min = arr[i];
            }
        }
        std::cout << max + min << std::endl;
        return 0;
}
