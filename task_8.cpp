#include <iostream>

int getMatrix(int arr[][3], int size);
int mainDiagonal(int arr[][3], int size);

int main(){
        const int size = 3;
        int matrix[size][size];
        getMatrix(matrix, size);
        mainDiagonal(matrix, size);
        return 0;
}       

int getMatrix(int arr[][3], int size){
        for (int i = 0; i < size; ++i){
                for(int j = 0; j < size; ++j){
                    std::cin>>arr[i][j];
                }
        }
        return 0;
}

int mainDiagonal(int arr[][3], int size){
        for (int i = 0; i < size; ++i){
                for(int j = 0; j < size; ++j){
                        if(i + j == size - 1) std::cout<<arr[i][j];
                }
        }
        return 0;
}
