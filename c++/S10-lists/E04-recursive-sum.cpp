#include <iostream>
#include "../U1-libraries/dxarray.cpp"
#include "../U1-libraries/dxlist.cpp"

const int ARRAY_SIZE = 32;

int recursiveSum(int array[], int index) {
	if (index == 0) return array[index];
	return array[index] + recursiveSum(array, index - 1);
}


int getListSum(dxlist<int*> myList) {
	int finalSum = 0;

	for(const auto &array: myList) {
		finalSum += recursiveSum(array, ARRAY_SIZE - 1);
	}

	return finalSum;
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= RECURSIVE SUM =========]\e[0m\n\n";

	dxlist<int*> randomList;

	int firstArray[ARRAY_SIZE];
	randArray(firstArray, ARRAY_SIZE);
	printf("First array: ");
	printArray(firstArray, ARRAY_SIZE);

	int secondArray[ARRAY_SIZE];
	randArray(secondArray, ARRAY_SIZE);
	printf("Second array: ");
	printArray(secondArray, ARRAY_SIZE);

	randomList.push_back(firstArray);
	randomList.push_back(secondArray);

	int finalSum = getListSum(randomList);

	printf("\nFinal sum: \e[0;32m%d\e[0m\n", finalSum);

	return 0;
}
