#include <iostream>
#include "../U1-libraries/dxarray.cpp"

int* mergeArray(int* firstArray, int* secondArray, int firstSize, int secondSize) {
	int finalSize = firstSize + secondSize;
	int* finalArray = new int[finalSize];

	int i = 0, j = 0, k = 0;
	while (i < firstSize && j < secondSize) {
		if (firstArray[i] < secondArray[j]) {
			finalArray[k] = firstArray[i];
			i++;
		} else {
			finalArray[k] = secondArray[j];
			j++;
		}
		k++;
	}

	while (i < firstSize) {
		finalArray[k] = firstArray[i];
		i++;
		k++;
	}

	while (j < secondSize) {
		finalArray[k] = secondArray[j];
		j++;
		k++;
	}

	return finalArray;
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= MERGE ARRAYS =========]\e[0m\n\n";

	int oddNumbers[] = {1,3, 5, 7, 9};
	int evenNumbers[] = {0,2,4, 6, 8, 10};

	int oddSize = sizeof(oddNumbers) / sizeof(oddNumbers[0]);
	int evenSize = sizeof(evenNumbers) / sizeof(evenNumbers[0]);

	printf("ODD ARRAY");
	printArray(oddNumbers, oddSize);
	printf("EVEN ARRAY");
	printArray(evenNumbers, evenSize);

	int* naturalNumbers = mergeArray(oddNumbers, evenNumbers, oddSize, evenSize);
	int naturalSize = oddSize + evenSize;

	printf("MERGED ARRAY");
	printArray(naturalNumbers, naturalSize);

	delete[] naturalNumbers;

	return 0;
}
