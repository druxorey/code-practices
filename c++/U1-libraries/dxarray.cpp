#include <iostream>

void randArray(int array[], int size) {
	srand(time(NULL));

	for (int i = 0; i < size; i++) {
		array[i] = rand() % (size * 2);
	}
}


void fillMatrix(int** matrix, int sizeMatrix) {
    int number = 1;

    for (int i = 0; i < sizeMatrix; i++) {
        for (int j = 0; j < sizeMatrix; j++) {
            matrix[i][j] = number + j;
        }
        number += sizeMatrix;
    }
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
