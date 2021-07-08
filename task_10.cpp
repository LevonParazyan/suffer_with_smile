#include <iostream>

int createMatrix(int arr[][3], int size);
int changeDiagonals(int arr[][3], int size);

int main() {
	const int size = 3;
	int matrix[size][size];
	createMatrix(matrix, size);
	changeDiagonals(matrix, size);
}

int createMatrix(int arr[][3], int size){
	for (int i = 0; i < size; ++i){
                for(int j = 0; j < size; ++j){
                    std::cin >> arr[i][j];
                }
        }
        return 0;
}

int changeDiagonals(int arr[][3], int size){
	int mind = 0;
	for (int i = 0; i < size; ++i){
        	mind = arr[i][i];
        	arr[i][i] = arr[i][size - i - 1];
        	arr[i][size - i - 1] = mind;
    	}
	for (int i = 0; i < size; ++i) {
        	for (int j = 0; j < size; ++j) {
			std::cout<<arr[i][j];
        	}
		std::cout<<std::endl;
    	}
	return 0;
}
