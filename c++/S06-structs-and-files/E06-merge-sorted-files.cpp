#include <iostream>
#include <fstream>
#include "../U1-libraries/dxinput.hpp"


void sortArray(int* array, int size) {
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (array[i] > array[j]) {
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}


int getArraySize(std::ifstream &file) {
	int size = -1;
	std::string line;

	while (!file.eof()) {
		getline(file, line);
		size++;
	}

	file.clear();
	file.seekg(0, std::ios::beg);

	return size;
}


void mergeList(std::string firstList, std::string secondList, std::string outputList) {
	std::ifstream firstFile(firstList);
	std::ifstream secondFile(secondList);

    std::ofstream outputFile(outputList, std::ios::app);

	int firstSize = getArraySize(firstFile);
	int secondSize = getArraySize(secondFile);

	int* mergeArray = new int[firstSize + secondSize];

	int i = 0, j = 0;
	for (; i < firstSize; i++) firstFile >> mergeArray[i];
	for (; j < secondSize; j++) secondFile >> mergeArray[i + j];

	sortArray(mergeArray, firstSize + secondSize);
	for (int k = 0; k < firstSize + secondSize; k++) {
		outputFile << mergeArray[k] << "\n";
	}

	firstFile.close();
	secondFile.close();
	outputFile.close();
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= MERGE SORTED FILES =========]\e[0m\n\n";
	isArgumentValid(argc, argv, 2);

	std::string firstList = argv[1];
	std::string secondList = argv[2];
	std::string outputList = "E06-merge.out";

	mergeList(firstList, secondList, outputList);

	return 0;
}
