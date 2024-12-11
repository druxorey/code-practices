#include <iostream>
#include "../U1-libraries/dxinput.cpp"
#include "../U1-libraries/dxarray.cpp"

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
		printf("\n\e[0;33mThe numbers at positions %d, %d, %d and %d sum %d\e[0m\n", a, b, c, d, lookedNumber);
		return 1;
	}

	printf("\nTrying with %d, %d, %d and %d\n", a, b, c, d);

	for (int i = 1 ; i < size; i++) {
		if (recursiveEquation(array, size, lookedNumber, a, b, c, i + d)) return 1;
		if (recursiveEquation(array, size, lookedNumber, a, b, i + c, d)) return 1;
		if (recursiveEquation(array, size, lookedNumber, a, i + b, c, d)) return 1;
		if (recursiveEquation(array, size, lookedNumber, i + a, b, c, d)) return 1;
	}

	return 0;
}


int main() {
	std::cout << "\n\e[0;35m[========= RECURSIVE EQUATION =========]\e[0m\n" << '\n';

	int arraySize, lookedNumber;

	getInput("Enter the size of the array: ", arraySize);
	if (arraySize < 4) {
		printf("\n\e[0;31mThe array size must be greater or equal than 4\e[0m\n");
		return 1;
	}

	getInput("Enter the number to look for: ", lookedNumber);
	if (lookedNumber < 0) {
		printf("\n\e[0;31mThe number to look for must be greater or equal than 0\e[0m\n");
		return 1;
	}

	int *array = new int[arraySize];

	fillArray(array, arraySize);
	recursiveEquation(array, arraySize, lookedNumber);

	return 0;
}
