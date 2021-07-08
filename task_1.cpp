#include <iostream>

int getHighestValsId(int arr[], int size);

int main() {
        const int size = 5;
        int arr[size];
        for(int i = 0; i < size; ++i) std::cin >> arr[i];
        getHighestValsId(arr, size);
        return 0;
}

int getHighestValsId(int arr[], int size){
        int id = 0, max;
        max = arr[0];
        for(int i = 1; i < size; ++i){
            if(max < arr[i]) {
                max = arr[i];
                id = i;
            }    
        }
        std::cout << id << std::endl;
        return 0;
}
