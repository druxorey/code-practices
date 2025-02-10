#include <iostream>
#include "../U1-libraries/dxinput.cpp"
#include "../U1-libraries/dxarray.cpp"
#include "../U1-libraries/dxlist.cpp"

void printArrayList(list<int*> &arrayList, int arraySize) {
	list<int*>::iterator listIterator = arrayList.first();
	while (listIterator != nullptr) {
		int* retrievedArr = *arrayList.get(listIterator);

		printf("[");
		for (int i = 0; i < arraySize; ++i) {
			printf("%d", retrievedArr[i]);
			if (i < arraySize - 1) printf(", ");
		}
		arrayList.next(listIterator);
		printf("]\n");
	}
}


void removeArrayElement(int* arr, int arraySize, int index) {
	for (int i = index; i < arraySize - 1; ++i) {
		arr[i] = arr[i + 1];
	}
}


void deleteListNumber(list<int*> &arrayList, int arraySize, int deleteNumber) {
	list<int*>::iterator listIterator = arrayList.first();
	while(listIterator != nullptr) {
		int* retrievedArr = *arrayList.get(listIterator);
		for (int i = 0; i < arraySize; ++i) {
			if (retrievedArr[i] == deleteNumber) {
				removeArrayElement(retrievedArr, arraySize, i);
			}
		}
		arrayList.next(listIterator);
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

	list<int*> arrayList;

    arrayList.insert(arrayList.first(), firstArray);
    arrayList.insert(arrayList.first(), secondArray);
    arrayList.insert(arrayList.first(), thirdArray);

	printf("\n\e[0;33mOriginal List\e[0m:\n");
	printArrayList(arrayList, arraySize);

	deleteListNumber(arrayList, arraySize, deleteNumber);

	printf("\n\e[0;33mList after deleting number \e[0;32m%d\e[0m:\n", deleteNumber);
	printArrayList(arrayList, arraySize);

	return 0;
}
