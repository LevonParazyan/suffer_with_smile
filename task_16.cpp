#include <iostream>

int elementsSumMul(int arr[], int size);


int main() {
	const int size = 5;
	int arr[size] = {1,2,3,4,5};
	elementsSumMul(arr, size);
	return 0;
}

int elementsSumMul(int arr[], int size){\
	int sum = 0, mul = 1;
	for(int i = 0; i < size; ++i){
		sum += arr[i];
		mul *= arr[i];
	}
	std::cout << (mul + sum) / 2;

	return 0;
}
