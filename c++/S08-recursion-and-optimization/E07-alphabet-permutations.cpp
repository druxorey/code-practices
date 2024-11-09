#include <iostream>
#include "../U1-libraries/dxinput.cpp"
#include "../U1-libraries/dxarray.cpp"

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


int main() {
	int alphaberSize = 0, permutations = 0;

	std::cout << "\n\e[0;35m[========= LETTERS PERMUTATIONS =========]\e[0m\n" << '\n';

	getInput("Enter string size: ", alphaberSize);
	char letters[alphaberSize];
	fillArray(letters, alphaberSize);

	getPermutations(letters, alphaberSize, permutations);
	printf("\n\e[0;32mTotal permutations: %d\e[0m\n", permutations);

	return 0;
}
