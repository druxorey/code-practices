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
		printArray(array, size);
		permutations++;
		return;
	}

	for (int i = index; i < size; i++) {
		swap(array[index], array[i]);
		getPermutations(array, size, permutations, index + 1);
		swap(array[index], array[i]);
	}
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= ALPHABET PERMUTATIONS =========]\e[0m\n\n";

	int alphaberSize = 0, permutations = 0;

	getcin("Enter string size: ", alphaberSize);
	char letters[alphaberSize];
	fillArray(letters, alphaberSize);

	getPermutations(letters, alphaberSize, permutations);
	printf("\n\e[0;32mTotal permutations: %d\e[0m\n", permutations);

	return 0;
}
