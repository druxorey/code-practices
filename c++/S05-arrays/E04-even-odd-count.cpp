#include <iostream>
#include "array-functions.cpp"

void oddAndEven(int numberList[], int size, int &even, int &odd) {
	even = 0, odd =0;
	for (int i = 0; i < size; i++) {
		if (numberList[i] % 2 == 0) { even ++; }
		else { odd ++; }
	}
}

int main() {
	int sizeArray, evenQuantity, oddQuantity;

	std::cout << "\n\e[0;35m[========= EVEN ODD COUNT =========]\e[0m\n" << '\n';

	printf("Enter the size of the array: ");
	std::cin >> sizeArray;

	int numberList[sizeArray];
	randArray(numberList, sizeArray);
	oddAndEven(numberList, sizeArray, evenQuantity, oddQuantity);

	printf("In the array are %i odd numbers and %i even numbers.\n", oddQuantity, evenQuantity);

	return 0;
}
