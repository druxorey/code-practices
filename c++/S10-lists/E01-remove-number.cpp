#include <iostream>
#include <list>
#include "../U1-libraries/dxinput.cpp"
#include "../U1-libraries/dxarray.cpp"

void printArrayList(std::list<int*> &arrayList, int arraySize) {
	int nodeIndex = 1;
	for (const auto &array : arrayList) {
		printf("Array %d: [", nodeIndex);
		for (int i = 0; i < arraySize; ++i) {
			printf("%d", array[i]);
			if (i < arraySize - 1) printf(", ");
		}
		printf("]\n");
		nodeIndex++;
	}
}


void removeArrayElement(int* arr, int arraySize, int index) {
	for (int i = index; i < arraySize - 1; ++i) {
		arr[i] = arr[i + 1];
	}
}


void deleteListNumber(std::list<int*> &arrayList, int arraySize, int deleteNumber) {
	auto listIterator = arrayList.begin();
	while(listIterator != arrayList.end()) {
		int* retrievedArr = *listIterator;
		for (int i = 0; i < arraySize; ++i) {
			if (retrievedArr[i] == deleteNumber) {
				removeArrayElement(retrievedArr, arraySize, i);
			}
		}
		listIterator++;
	}
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= REMOVE NUMBER =========]\e[0m\n\n";

	int deleteNumber, arraySize;
	getcin("Enter the size of the arrays: ", arraySize);
	getcin("Enter the number to be deleted: ", deleteNumber);

	int firstArray[arraySize];
	randArray(firstArray, arraySize);

	int secondArray[arraySize];
	randArray(secondArray, arraySize);

	int thirdArray[arraySize];
	randArray(thirdArray, arraySize);

	std::list<int*> arrayList;

	arrayList.insert(arrayList.begin(), firstArray);
	arrayList.insert(arrayList.begin(), secondArray);
	arrayList.insert(arrayList.begin(), thirdArray);

	printf("\n\e[0;33mOriginal List\e[0m:\n");
	printArrayList(arrayList, arraySize);

	deleteListNumber(arrayList, arraySize, deleteNumber);

	printf("\n\e[0;33mList after deleting number \e[0;32m%d\e[0m:\n", deleteNumber);
	printArrayList(arrayList, arraySize);
	printf("\n");

	return 0;
}
