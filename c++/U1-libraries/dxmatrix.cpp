#include <iostream>

void fillMatrix(int** matrix, int sizeMatrix) {
    int number = 1;

    for (int i = 0; i < sizeMatrix; i++) {
        for (int j = 0; j < sizeMatrix; j++) {
            matrix[i][j] = number + j;
        }
        number += sizeMatrix;
    }
}


void printMatrix(int** matrix, int sizeMatrix) {
    int biggestNumber = sizeMatrix * sizeMatrix;
    int digits = std::to_string(biggestNumber).length();

    for (int i = 0; i < sizeMatrix; i++) {
        for (int j = 0; j < sizeMatrix; j++) {
            int currentDigits = std::to_string(matrix[i][j]).length();
            for (int k = 0; k < digits - currentDigits; k++) {
                std::cout << " ";
            }
            std::cout << matrix[i][j] << "|";
        }
        std::cout << '\n';
    }
}

