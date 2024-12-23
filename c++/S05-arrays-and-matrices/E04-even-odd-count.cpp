#include <iostream>
#include "../U1-libraries/dxarray.cpp"
#include "../U1-libraries/dxinput.cpp"

int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= EVEN ODD COUNT =========]\e[0m\n\n";

	int sizeArray, evenQuantity = 0, oddQuantity = 0;

	getInput("Enter the size of the array: ", sizeArray);

	int numberList[sizeArray];
	randArray(numberList, sizeArray);

	for (int number : numberList) {
		if (number % 2 == 0) { evenQuantity ++; }
		else { oddQuantity ++; }
	}

	printArray(numberList, sizeArray);
	printf("In the array are %i odd numbers and %i even numbers.\n", oddQuantity, evenQuantity);

	return 0;
}
