#include <iostream>

int randArray(int array[], int size) {
	srand(time(NULL));

	for (int i = 0; i < size; i++) {
		array[i] = rand() % (size * 2);
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
	std::cout << '\n' << "The array is: [";
	for (int i = 0; i < size; i++) {
		std::cout << array[i];
		if (i != size - 1) {
			std::cout << ",";
		}
	}
	std::cout << "]" << '\n';
}
