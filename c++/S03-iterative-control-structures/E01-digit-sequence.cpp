#include <iostream>

int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= DIGITS SEQUENCE =========]\e[0m\n\n";

	int inputNumber, i;

	std::cout << "Enter the number: ";
	std::cin >> inputNumber;

	for (i = 0; inputNumber > 0; i++) {
		inputNumber /= 10;
	}

	std::cout << "The number has " << i << " digits." << '\n';

	return 0;
}
