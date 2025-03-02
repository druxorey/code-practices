#include <iostream>
#include <vector>
#include "../U1-libraries/dxinput.cpp"
#include "../U1-libraries/dxarray.cpp"

void printArithmetic(int array[], int size, int lookedNumber, std::vector<char> operations) {
	printf("\e[0;34m[\e[0m");
	if (array[0] > 0) printf(" ");
	for (int i = 0; i < size; i++) {
		printf("\e[0m%d", array[i]);
		if (i != size - 1) {
			printf("\e[0;33m %c ", operations[i]);
		}
	}
	printf("\e[0;34m ]\e[0m = %d\n", lookedNumber);
}


void getArithmetic(int number, int lookedNumber, int array[], int size, int index = 1, std::vector<char> operations = {}) {
	if (index == size) {
		int result = array[0];
		for (int i = 1; i < size; i++) {
			switch (operations[i - 1]) {
				case '+': result += array[i]; break;
				case '-': result -= array[i]; break;
				case '*': result *= array[i]; break;
				case '/': result /= array[i]; break;
			}
		}
		if (result == lookedNumber) {
			printArithmetic(array, size, lookedNumber, operations);
		}
		return;
	}

	operations.push_back('+');
	getArithmetic(number, lookedNumber, array, size, index + 1, operations);
	operations.back() = '-';
	getArithmetic(number, lookedNumber, array, size, index + 1, operations);
	operations.back() = '*';
	getArithmetic(number, lookedNumber, array, size, index + 1, operations);
	operations.back() = '/';
	getArithmetic(number, lookedNumber, array, size, index + 1, operations);
}


int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= ARITHMETIC EXPRESSIONS =========]\e[0m\n\n";

	int initialNumber = 0, lookedNumber = 0;

	getcin("Enter the initial number: ", initialNumber);
	getcin("Enter the number to look for: ", lookedNumber);

	if (initialNumber < 1) {
		printf("The initial number must be greater than 0.\n");
		return 0;
	}

	int numbers[initialNumber];

	for (int i = 0; i < initialNumber; i++) {
		numbers[i] = i + 1;
	}

	getArithmetic(numbers[0], lookedNumber, numbers, initialNumber);
	numbers[0] *= -1;
	getArithmetic(numbers[0], lookedNumber, numbers, initialNumber);

	return 0;
}
