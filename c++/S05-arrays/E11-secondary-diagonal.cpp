#include <iostream>
#include "array-functions.cpp"

int diagonalMatrix(int** matrix, int sizeMatrix) {
	int finalSum = 0;
	for (int i = 0; i < sizeMatrix; i++) {
		finalSum += matrix[i][(sizeMatrix - 1) - i];
	}
	return finalSum;
}


int main() {
	int sizeMatrix;

	std::cout << "\n\e[0;35m[========= SECONDARY DIAGONAL =========]\e[0m\n" << '\n';

	printf("Enter the size of the array: ");
	std::cin >> sizeMatrix;

	int** matrix = new int*[sizeMatrix]; 
	for (int i = 0; i < sizeMatrix; i++) {
		matrix[i] = new int[sizeMatrix];
	}

	fillMatrix(matrix, sizeMatrix);
	printMatrix(matrix, sizeMatrix);
	printf("\nThe sum of the secondary diagonal is %i.\n", diagonalMatrix(matrix, sizeMatrix));

	for (int i = 0; i < sizeMatrix; i++) {
		delete[] matrix[i]; 
	}
	delete[] matrix; 

	return 0;
}
