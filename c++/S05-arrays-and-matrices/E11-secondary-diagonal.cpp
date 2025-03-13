#include <iostream>
#include "../U1-libraries/dxmatrix.hpp"
#include "../U1-libraries/dxinput.hpp"

int diagonalMatrix(int** matrix, int sizeMatrix) {
	int finalSum = 0;
	for (int i = 0; i < sizeMatrix; i++) {
		finalSum += matrix[i][(sizeMatrix - 1) - i];
	}
	return finalSum;
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= SECONDARY DIAGONAL =========]\e[0m\n\n";

	int sizeMatrix;

	getcin("Enter the size of the matrix: ", sizeMatrix);

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
