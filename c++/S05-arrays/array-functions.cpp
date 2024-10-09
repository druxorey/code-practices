#include <iostream>

int randArray(int array[], int size) {
	for (int i = 0; i < size; i++) {
		array[i] = rand() % size;
	}
	return array[size];
}

int fillArray(int array[], int size) {
	for (int i = 0; i < size; i++) {
		array[i] = i;
	}
	return array[size];
}

void printArray(int array[], int size) {
	std::cout << '\n';
	for (int i = 0; i < size; i++) {
		std::cout << array[i] << " ";
	}
	std::cout << '\n';
}
