#include <iostream>

int matrix(int mtx[][3], int size);
int cpyMatrix(int mtx[][3], int *arr, int size);

int main() {
	const int size = 3;
	int emptyMatrix[size][size];
	int *arr = new int[size];
	matrix(emptyMatrix, size);
	cpyMatrix(emptyMatrix, arr, size);
	return 0;
}

int matrix(int mtx[][3], int size){
	for(int i = 0; i < size; ++i){
		for(int j = 0; j < size; ++j){
			std::cin >> mtx[i][j];
		}
	}
	return 0;
}

int cpyMatrix(int mtx[][3], int *arr, int size) {
	for(int i = 0; i < size; ++i) {
		for(int j = 0; j < size; ++j) {
			arr[j] = mtx[i][j];
			std::cout << arr[j];	
		}
	}
	return 0;
}
