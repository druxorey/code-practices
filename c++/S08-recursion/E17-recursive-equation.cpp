#include <iostream>
#include "../U1-libraries/dxinput.hpp"
#include "../U1-libraries/dxarray.hpp"

bool isValid(int size, int a, int b, int c, int d) {
	if (a >= size || b >= size || c >= size || d >= size) return 0;
	if (a == b || a == c || a == d) return 0;
	if (b == c || b == d) return 0;
	if (c == d) return 0;
	return 1;
}


bool recursiveEquation(int array[], int size, int lookedNumber, int a = 0, int b = 1, int c = 2, int d = 3) {
	if (array[d] == 0) return 0;
	if (!isValid(size, a, b, c, d)) return 0;

	if (array[a] + array[b] * array[c] / array[d] == lookedNumber) {
		printf("\n\e[0;33mBy operating the numbers %d, %d, %d and %d you get to %d\e[0m\n", array[a], array[b], array[c], array[d], lookedNumber);
		return 1;
	}

	printf("Trying with %d, %d, %d and %d\n", array[a], array[b], array[c], array[d]);

	for (int i = 1 ; i < size; i++) {
		if (recursiveEquation(array, size, lookedNumber, a, b, c, i + d)) return 1;
		if (recursiveEquation(array, size, lookedNumber, a, b, i + c, d)) return 1;
		if (recursiveEquation(array, size, lookedNumber, a, i + b, c, d)) return 1;
		if (recursiveEquation(array, size, lookedNumber, i + a, b, c, d)) return 1;
	}

	return 0;
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= RECURSIVE EQUATION =========]\e[0m\n\n";

	int arraySize, lookedNumber;

	getcin("Enter the size of the array: ", arraySize);
	if (arraySize < 4) {
		printf("\n\e[0;31mThe array size must be greater or equal than 4\e[0m\n");
		return 1;
	}

	getcin("Enter the number to look for: ", lookedNumber);
	if (lookedNumber < 0) {
		printf("\n\e[0;31mThe number to look for must be greater or equal than 0\e[0m\n");
		return 1;
	}

	int *array = new int[arraySize];

	for (int i = 0; i <= arraySize; i++) {
		array[i] = i + 1;
	}

	recursiveEquation(array, arraySize, lookedNumber);

	delete[] array;

	return 0;
}
