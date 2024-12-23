#include <iostream>
#include "../U1-libraries/dxarray.cpp"
#include "../U1-libraries/dxinput.cpp"

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


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= MAX VALUE =========]\e[0m\n\n";

	int sizeArray;

	getInput("Enter the size of the array: ", sizeArray);

	int initialArray[sizeArray];
	randArray(initialArray, sizeArray);

	printArray(initialArray, sizeArray);
	printf("The max number in the array is %i.\n", maxArray(initialArray, sizeArray));

	return 0;
}
