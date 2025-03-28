#include <iostream>
#include "../U1-libraries/dxarray.hpp"
#include "../U1-libraries/dxinput.hpp"

void averageInArray(int array[], int size, int number, int &quantity) {
	for (int i = 0; i < size; i++) {
		quantity += (array[i] >= number) ? 1 : 0;
	}
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= GREATER THAN N =========]\e[0m\n\n";

	int sizeArray, thresholdValue, countGreaterThan = 0;

	getcin("Enter the size of the array: ", sizeArray);
	getcin("Enter the averge number: ", thresholdValue);

	int array[sizeArray];

	randArray(array, sizeArray);
	averageInArray(array, sizeArray, thresholdValue, countGreaterThan);

	float percentageValue = (float)countGreaterThan / (float)sizeArray * 100.0;

	printArray(array, sizeArray);

	printf("\nThe number of elements greater than %i is %i.\n", thresholdValue, countGreaterThan);
	printf("The percentage of elements greater than %i is %.2f%%.\n", thresholdValue, percentageValue);

	return 0;
}
