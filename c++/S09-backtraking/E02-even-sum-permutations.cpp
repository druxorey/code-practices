#include <iostream>
#include "../U1-libraries/dxinput.hpp"
#include "../U1-libraries/dxarray.hpp"

void swap(char &a, char &b) {
	char temp = a;
	a = b;
	b = temp;
}


void getPermutations(char array[], int size, int &permutations, int index = 0) {
	if (index == size) {
		int totalSum = 0;
		for (int i = 0; i < size; i+=2) {
			totalSum += array[i];
		}

		if (totalSum % 2 == 0) {
			printArray(array, size);
			permutations++;
		}

		return;
	}

	for (int i = index; i < size; i++) {
		swap(array[index], array[i]);
		getPermutations(array, size, permutations, index + 1);
		swap(array[index], array[i]);
	}
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= EVEN SUM PERMUTATIONS =========]\e[0m\n\n";

	int size, permutations = 0;

	getcin("Enter the string size: ", size);

	char letters[size];

	fillArray(letters, size);
	getPermutations(letters, size, permutations);
	printf("\n\e[0;32mTotal permutations: %d\e[0m\n", permutations);

	return 0;
}
