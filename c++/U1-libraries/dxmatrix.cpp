#include <iostream>

template <typename datatype, int rows, int cols>
void printMatrix(datatype (&matrix)[cols][rows]) {
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


template <typename datatype>
void printMatrix(datatype** matrix, int sizeMatrix, std::string trueChar = "1", std::string falseChar = "0") {
    int biggestNumber = sizeMatrix * sizeMatrix;
    int digits = std::to_string(biggestNumber).length();

    for (int i = 0; i < sizeMatrix; i++) {
		std::cout << "\e[0;34m|\e[0m";

        for (int j = 0; j < sizeMatrix; j++) {
            int currentDigits = std::to_string(matrix[i][j]).length();

            for (int k = 1; k < digits - currentDigits; k++) {
                std::cout << " ";
            }

			if (matrix[i][j] == true) std::cout << trueChar;
			else std::cout << falseChar;

            std::cout << "\e[0;34m|\e[0m";
        }
        std::cout << '\n';
    }
}


template <int rows, int cols>
void fillMatrix(int (&matrix)[cols][rows]) {
    int number = 1;

    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            matrix[i][j] = number + j;
        }
        number += rows;
    }
}


void fillMatrix(int** matrix, int size) {
    int number = 1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix[i][j] = number + j;
        }
        number += size;
    }
}
