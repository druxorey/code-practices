#include <iostream>
#include "../U1-libraries/dxmatrix.hpp"
#include "../U1-libraries/dxinput.hpp"

void changeRows(int** matrix, int size) {
	int temporal = 0;
	for (int i = 0; i < size; i+=2) {
		for (int j = 0; j < size; j++) {
			temporal = matrix[i][j];
			matrix[i][j] = matrix[i+1][j];
			matrix[i+1][j] = temporal;
		}
	}
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= SWAP ROWS =========]\e[0m\n\n";

	int sizeMatrix = 2;

	do {
		if (sizeMatrix % 2 != 0) {
			printf("\n\e[0;31mThe number must be even\e[0m\n");
		}
		getcin("Enter the size of the matrix: ", sizeMatrix);
	} while (sizeMatrix % 2 != 0);

	int** matrix = new int*[sizeMatrix];
	for (int i = 0; i < sizeMatrix; i++) {
		matrix[i] = new int[sizeMatrix];
	}

	printf("\nInitial matrix\n");
	fillMatrix(matrix, sizeMatrix);
	printMatrix(matrix, sizeMatrix);

	printf("\nChanged matrix\n");
	changeRows(matrix, sizeMatrix);
	printMatrix(matrix, sizeMatrix);

	for (int i = 0; i < sizeMatrix; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;

	return 0;
}
