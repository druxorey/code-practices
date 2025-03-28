#include <iostream>

#pragma once

// Function to get the biggest number in a matrix
inline int getBiggestNumber(int** matrix, int size) {
	int biggestNumber = matrix[size-1][size-1];
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (matrix[i][j] > biggestNumber) biggestNumber = matrix[i][j];
		}
	}
	return biggestNumber;
}

// Template function to print a matrix with fixed dimensions
template <typename datatype, int rows, int cols>
void printMatrix(datatype (&matrix)[cols][rows]) {
	int biggestNumber = rows * cols; // Calculate the largest possible number
	int digits = std::to_string(biggestNumber).length(); // Get the number of digits

	for (int i = 0; i < cols; i++) {
		for (int j = 0; j < rows; j++) {
			// Get the number of digits of the current element
			int currentDigits = std::to_string(matrix[i][j]).length();
			for (int k = 0; k < digits - currentDigits; k++) {
				std::cout << " ";
			}
			std::cout << matrix[i][j] << "\e[0;34m|\e[0m"; // Print the element with a separator
		}
		std::cout << '\n';
	}
}

// Template function to print a dynamically allocated matrix
template <typename datatype>
void printMatrix(datatype** matrix, int sizeMatrix) {
	int biggestNumber = getBiggestNumber(matrix, sizeMatrix); // Get the largest number in the matrix
	int digits = std::to_string(biggestNumber).length(); // Get the number of digits

	for (int i = 0; i < sizeMatrix; i++) {
		std::cout << "\e[0;34m|\e[0m"; // Print the initial separator
		for (int j = 0; j < sizeMatrix; j++) {
			// Get the number of digits of the current element
			int currentDigits = std::to_string(matrix[i][j]).length();
			for (int k = 0; k < digits - currentDigits; k++) {
				std::cout << " ";
			}
			std::cout << matrix[i][j] << "\e[0;34m|\e[0m"; // Print the element with a separator
		}
		std::cout << '\n';
	}
}

// Template function to print a boolean matrix with custom characters
template <typename datatype>
void printMatrix(datatype** matrix, int sizeMatrix, std::string trueChar, std::string falseChar) {
	for (int i = 0; i < sizeMatrix; i++) {
		std::cout << "\e[0;34m|\e[0m"; // Print the initial separator
		for (int j = 0; j < sizeMatrix; j++) {
			if (matrix[i][j] == true) std::cout << trueChar; // Print trueChar if the element is true
			else std::cout << falseChar; // Print falseChar if the element is false
			std::cout << "\e[0;34m|\e[0m"; // Print the separator
		}
		std::cout << '\n';
	}
}

// Template function to fill a matrix with sequential numbers
template <int rows, int cols>
void fillMatrix(int (&matrix)[cols][rows]) {
	int number = 1;

	for (int i = 0; i < cols; i++) {
		for (int j = 0; j < rows; j++) {
			matrix[i][j] = number + j; // Fill the matrix with sequential numbers
		}
		number += rows; // Increment the starting number for the next row
	}
}

// Function to fill a dynamically allocated matrix with sequential numbers
inline void fillMatrix(int** matrix, int size) {
	int number = 1;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			matrix[i][j] = number + j; // Fill the matrix with sequential numbers
		}
		number += size; // Increment the starting number for the next row
	}
}
