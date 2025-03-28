#include <iostream>
#include <cmath>
#include "../U1-libraries/dxarray.hpp"
#include "../U1-libraries/dxinput.hpp"

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


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= POWER OF TWO =========]\e[0m\n\n";

	int sizeArray, replacedNumber;

	getcin("Enter the size of the array: ", sizeArray);
	getcin("Enter the number to replace every N²: ", replacedNumber);

	int array[sizeArray];

	randArray(array, sizeArray);
	replaceInArray(array, sizeArray, replacedNumber);
	printArray(array, sizeArray);

	return 0;
}
