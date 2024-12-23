#include <iostream>
#include "../U1-libraries/dxinput.cpp"
#include "../U1-libraries/dxarray.cpp"

int binarySearch(int array[], int number, int top, int bottom = 0) {
	int middle = (top + bottom) / 2;
	if (array[middle] == number) return middle;
	if (top <= bottom) return -1;
	if (array[middle] < number) return binarySearch(array, number, top, middle + 1);
	return binarySearch(array, number, middle - 1, bottom);
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= BINARY SEARCH =========]\e[0m\n\n";

	int size, number, position;

	getcin("Enter the size of the array: ", size);
	getcin("Enter the number to search: ", number);
	int numbers[size];

	fillArray(numbers, size);
	printArray(numbers, size);

	position = binarySearch(numbers, number, size);

	if (position == -1)
		printf("\n\e[0;31mThe number was not found.\e[0m\n");
	else
		printf("\n\e[0;32mThe number was found at position %d.\e[0m\n", position);

	return 0;
}
