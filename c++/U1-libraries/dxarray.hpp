#include <iostream>
#include <ctime>

#pragma once

template <typename datatype>
void printArray(datatype array[], int size) {
	// Print the beginning of the array with color formatting
	std::cout << '\n' << "\e[0;33mThe array is: \e[0;34m[\e[0m";
	for (int i = 0; i < size; i++) {
		std::cout << array[i];

		// Print a comma between elements, but not after the last element
		if (i != size - 1) std::cout << ",";
	}
	// Print the end of the array with color formatting
	std::cout << "\e[0;34m]\e[0m" << '\n';
}

// Function to fill an integer array with random values
inline void randArray(int array[], int size) {
	srand(time(NULL) ^ (clock()));

	for (int i = 0; i < size; i++) {
		array[i] = rand() % (size * 2);
	}
}

// Function to fill an integer array with sequential values
inline void fillArray(int array[], int size) {
	for (int i = 0; i < size; i++) array[i] = i ;
}

// Function to fill a char array with sequential alphabetic characters
inline void fillArray(char array[], int size) {
	for (int i = 0; i < size; i++) array[i] = i + 'a';
}

inline void initArray(int array[], int size, int value) {
	for (int i = 0; i < size; i++) array[i] = value;
}
