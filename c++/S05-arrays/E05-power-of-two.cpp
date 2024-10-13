#include <iostream>
#include <cmath>
#include "array-functions.cpp"

void replaceInArray(int array[], int size, int number) {
	int i = 0, position = 0;

	printf("\nReplacing %i in the array\n\n", number);
	do {
		position = pow(2,i) - 1;
		array[position] = number;
		i++;
		printf("Replaced %i in position %i\n", number, position + 1);
	} while (pow(2,i) < size - 1);
}


int main(){
	int sizeArray, replacedNumber;

	std::cout << "\n\e[0;35m[========= POWER OF TWO =========]\e[0m\n" << '\n';

	do {
		std::cout << "Enter the size of the array: ";
		std::cin >> sizeArray;

		if (!std::cin.fail()) { break; }

		printf("Invalid input. Please try again.\n");
		std::cin.clear();
		std::cin.ignore(256,'\n');

	} while (true);

	do {
		std::cout << "Enter the size of the array: ";
		std::cin >> sizeArray;

		if (!std::cin.fail()) { break; }

		printf("Invalid input. Please try again.\n");
		std::cin.clear();
		std::cin.ignore(256,'\n');

	} while (true);

	int array[sizeArray];

	randArray(array, sizeArray);
	replaceInArray(array, sizeArray, replacedNumber);
	printArray(array, sizeArray);

	return 0;
}
