#include <iostream>
#include "../U1-libraries/dxinput.cpp"

int** createMatrix(int rows, int cols) {
    int** matrix = new int*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }
    return matrix;
}


void destroyMatrix(int** matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}


void fillMatrix(int** matrix, int rows, int cols) {
    int number = 1;
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            matrix[i][j] = number + j;
        }
        number += rows;
    }
}


void transposeMatrix(int** initialMatrix, int** finalMatrix, int rows, int cols) {
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            finalMatrix[j][i] = initialMatrix[i][j];
        }
    }
}


void printMatrix(int** matrix, int rows, int cols) {
    int biggestNumber = rows * cols;
    int digits = std::to_string(biggestNumber).length();

    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            int currentDigits = std::to_string(matrix[i][j]).length();
            for (int k = 0; k < digits - currentDigits; k++) {
                std::cout << " ";
            }
            std::cout << matrix[i][j] << "\e[0;34m|\e[0m";
        }
        std::cout << '\n';
    }
}


int main() {
	int rows, cols;

    std::cout << "\n\e[0;35m[========= TRANSPOSE MATRIX =========]\e[0m\n" << '\n';

	getInput("Enter the number of rows: ", rows);
	getInput("Enter the number of columns: ", cols);

    int** initialMatrix = createMatrix(cols, rows);
    int** finalMatrix = createMatrix(rows, cols);

	printf("INITIAL MATRIX\n");
    fillMatrix(initialMatrix, rows, cols);
    printMatrix(initialMatrix, rows, cols);

	printf("\nTRANSPOSE MATRIX\n");
    transposeMatrix(initialMatrix, finalMatrix, rows, cols);
    printMatrix(finalMatrix, cols, rows);

    destroyMatrix(initialMatrix, cols);
    destroyMatrix(finalMatrix, rows);

    return 0;
}
