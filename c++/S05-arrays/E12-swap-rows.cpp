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


int main() {
	int sizeMatrix;

	std::cout << "\n\e[0;35m[========= SWAP ROWS =========]\e[0m\n" << '\n';

	do {
		printf("Enter the size of the matrix: ");
		std::cin >> sizeMatrix;
	} while (sizeMatrix % 2 != 0);

	int** matrix = new int*[sizeMatrix]; 
	for (int i = 0; i < sizeMatrix; i++) {
		matrix[i] = new int[sizeMatrix];
	}

	fillMatrix(matrix, sizeMatrix);
	changeRows(matrix, sizeMatrix);

	std::cout << '\n';
	for (int i = 0; i < sizeMatrix; i++) {
		for (int j = 0; j < sizeMatrix; j++) {
			if (matrix[i][j] < 10) {std::cout << " ";}
			std::cout << matrix[i][j] << "|";
		}
		std::cout << '\n';
	}

	for (int i = 0; i < sizeMatrix; i++) {
		delete[] matrix[i]; 
	}
	delete[] matrix; 

	return 0;
}
