#include <iostream>
#include <cmath>
#include "array-functions.cpp"

void replaceInArray(int array[], int size, int number) {
	int i = 0, position = 0;

	do {
		position = pow(2,i) - 1;
		array[position] = number;
		i++;
	} while (pow(2,i) < size - 1);
}


int main(){
	int sizeArray, replacedNumber;

	std::cout << "\n\e[0;35m[========= POWER OF TWO =========]\e[0m\n" << '\n';

	printf("Enter the size of the array: ");
	std::cin >> sizeArray;
	printf("Enter the number: ");
	std::cin >> replacedNumber;

	int array[sizeArray];

	randArray(array, sizeArray);
	replaceInArray(array, sizeArray, replacedNumber);
	printArray(array, sizeArray);

	return 0;
}
