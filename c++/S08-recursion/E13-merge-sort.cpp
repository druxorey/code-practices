#include <iostream>
#include "../U1-libraries/dxinput.cpp"
#include "../U1-libraries/dxarray.cpp"

void mergeSort(int array[], int size) {
	if (size < 2) return;

	int middle = size / 2;
	int left[middle], right[size - middle];

	for (int i = 0; i < middle; i++) left[i] = array[i];
	for (int i = middle; i < size; i++) right[i - middle] = array[i];

	mergeSort(left, middle);
	mergeSort(right, size - middle);

	int i = 0, j = 0, k = 0;

	while (i < middle && j < size - middle) {
		if (left[i] < right[j]) array[k++] = left[i++];
		else array[k++] = right[j++];
	}

	while (i < middle) array[k++] = left[i++];
	while (j < size - middle) array[k++] = right[j++];
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= MERGE SORT =========]\e[0m\n\n";

	int size, position;

	getInput("Enter the size of the array: ", size);
	int numbers[size];

	randArray(numbers, size);
	printf("\n\e[0;33mGenerated array:\e[0m\n");
	printArray(numbers, size);

	mergeSort(numbers, size);
	printf("\n\e[0;33mSorted array:\e[0m\n");
	printArray(numbers, size);

	return 0;
}
