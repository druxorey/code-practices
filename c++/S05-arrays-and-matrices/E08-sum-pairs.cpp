#include <iostream>
#include "../U1-libraries/dxarray.cpp"
#include "../U1-libraries/dxinput.cpp"

int isArraySum(int array[], int size, int compared) {
	int times = 0;
	printf("\n");
	for (int i = 0; i < size; i++) {
		int firstSum = array[i];

		for (int j = 0; j < size - i; j++) {
			int secondSum = array[j+i];
			if (firstSum + secondSum == compared) {
				times++;
				printf("%i - The numbers are %i and %i.\n", times, firstSum, secondSum);
			}
		}
	}
	return times;
}


int main() {
	int finalNumber, sizeArray, finalTimes;

	std::cout << "\n\e[0;35m[========= SUM PAIRS =========]\e[0m\n" << '\n';

	getInput("Enter the array size: ", sizeArray);
	getInput("Enter the number to be compared: ", finalNumber);

	int array[sizeArray];
	randArray(array, sizeArray);

	printArray(array, sizeArray);

	finalTimes = isArraySum(array, sizeArray, finalNumber);

	if (finalTimes != 0) {
		printf("\nIn this array there is %i numbers that if we add them it gives %i.\n", finalTimes, finalNumber);
	} else {
		printf("In this array there is no number that if we add them it gives %i.\n", finalNumber);
	}

	return 0;
}