#include <iostream>
#include "array-functions.cpp"

int maxArray(int array[], int size) {
	int maxNumber = array[0];

	for (int i = 1; i < size; i++) {
		int element = array[i];

		if (element > maxNumber) {
			maxNumber = element;
		}
	}
	return maxNumber;
};


int main() {
	int sizeArray;

	std::cout << "\n\e[0;35m[========= MAX VALUE =========]\e[0m\n" << '\n';

	do {
		std::cout << "Enter the size of the array: ";
		std::cin >> sizeArray;

		if (!std::cin.fail()) { break; }

		printf("Invalid input. Please try again.\n");
		std::cin.clear();
		std::cin.ignore(256,'\n');

	} while (true);

	int initialArray[sizeArray];
	randArray(initialArray, sizeArray);

	printArray(initialArray, sizeArray);
	printf("The max number in the array is %i.\n", maxArray(initialArray, sizeArray));

	return 0;
}
