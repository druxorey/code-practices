#include <iostream>
#include "array-functions.cpp"

bool isArraySum(int array[], int size, int compared) {
	for (int i = 0; i < size; i++) {
		int firstSum = array[i];
		for (int j = 0; j < size - i; j++) {
			int secondSum = array[j+i];
			if (firstSum + secondSum == compared) {
				return true;
			}
		}
	}
	return false;
}


int main() {
	int finalNumber, sizeArray;

	std::cout << "\n\e[0;35m[========= SUM PAIRS =========]\e[0m\n" << '\n';

	printf("Enter the array size: ");
	std::cin >> sizeArray;

	printf("Enter the number to be compared: ");
	std::cin >> finalNumber;

	int array[sizeArray];
	fillArray(array, sizeArray);

	if (isArraySum(array, sizeArray, finalNumber)) {
		printf("\nIn this array there is 2 numbers that if we add them it gives %i.\n", finalNumber);
	} else {
		printf("\nIn this array there are not 2 numbers that if we add them it gives %i.\n", finalNumber);
	}

	return 0;
}
