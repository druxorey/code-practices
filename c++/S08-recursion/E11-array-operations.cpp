#include <iostream>
#include "../U1-libraries/dxinput.cpp"
#include "../U1-libraries/dxarray.cpp"

int maxval(int numbers[], int size) {
	if (size <= 0) return 0;
	if (size == 1) return numbers[0];
	int residualMax = maxval(numbers, size - 1);
	return numbers[size - 1] > residualMax ? numbers[size - 1]: residualMax;
}


int sumval(int numbers[], int size) {
	if (size <= 0) return 0;
	return numbers[size - 1] + sumval(numbers, size - 1);
}


double midval(int numbers[], int size) {
	if (size == 1) return numbers[0];
	return (numbers[size - 1] + (size - 1) * midval(numbers, size - 1)) / size;
}


bool isSorted(int numbers[], int size) {
	if (size <= 1) return true;
	if (numbers[size - 1] < numbers[size - 2]) return false;
	return isSorted(numbers, size - 1);
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= ARRAY OPERATIONS =========]\e[0m\n\n";

	int size;

	getInput("Enter the size of the array: ", size);

	int numbers[size];
	fillArray(numbers, size);

	printArray(numbers, size);

	printf("\e[0;33mMax value: \e[0m%d\n", maxval(numbers, size));
	printf("\e[0;33mSum value: \e[0m%d\n", sumval(numbers, size));
	printf("\e[0;33mMid value: \e[0m%f\n", midval(numbers, size));
	
	if (isSorted(numbers, size))
		printf("\e[0;32mThe array is sorted\e[0m\n");
	else
		printf("\e[0;31mThe array is not sorted\e[0m\n");

	return 0;
}
