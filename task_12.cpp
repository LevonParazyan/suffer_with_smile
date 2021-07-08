#include <iostream>

int numOfEven(int arr[], int size);
int dynArray(int arr[], int size);

int main() {
        const int size = 5;
        int *arr = new int[size];
        dynArray(arr, size);
        numOfEven(arr, size);
        delete arr;
        return 0;
}

int numOfEven(int arr[], int size){
        int num = 0;
        for(int i = 0; i < size; ++i){
                if(arr[i] % 2 == 0){
                        ++num;
                }
        }
        std::cout << num << std::endl;
        return 0;
}

int dynArray(int arr[], int size) {
        for(int i = 0; i < size; ++i) {
                std::cin >> arr[i];
        }
        return 0;
}

