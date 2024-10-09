#include <iostream>

void fillMatrix(int** matrix, int sizeMatrix) {
	int nose = 1;
	for (int i = 0; i < sizeMatrix; i++) {
		for (int j = 0; j < sizeMatrix; j++) {
			matrix[i][j] = nose + j;
			if (nose + j < 10) {std::cout << " ";}
			std::cout << nose + j << "|";
		}
		nose += sizeMatrix;
		std::cout << '\n';
	}
}


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
	std::cout << diagonalMatrix(matrix, sizeMatrix) << '\n';

	for (int i = 0; i < sizeMatrix; i++) {
		delete[] matrix[i]; 
	}
	delete[] matrix; 

	return 0;
}
