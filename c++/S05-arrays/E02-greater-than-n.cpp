#include <iostream>
#include "array-functions.cpp"

void averageInArray(int array[], int size, int number, int &quantity) {
	for (int i = 0; i < size; i++) {
		quantity += (array[i] >= number) ? 1 : 0;
	}
}


int main() {
	int sizeArray, thresholdValue, countGreaterThan = 0;

	std::cout << "\n\e[0;35m[========= GREATER THAN N =========]\e[0m\n" << '\n';

	printf("Enter the size of the array: ");
	std::cin >> sizeArray;
	printf("Enter the averge number: ");
	std::cin >> thresholdValue;

	int array[sizeArray];

	randArray(array, sizeArray);
	averageInArray(array, sizeArray, thresholdValue, countGreaterThan);

	float percentageValue = (float)countGreaterThan / (float)sizeArray * 100.0;

	printArray(array, sizeArray);
	printf("\nFinal quantity: %i\n", countGreaterThan);
	printf("Final percentaje: %i%%\n", (int)percentageValue);

	return 0;
}
