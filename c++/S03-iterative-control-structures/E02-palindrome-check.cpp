#include <iostream>

int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= PALINDROME CHECK =========]\e[0m\n\n";

	int inputNumber;

	std::cout << "Enter the number: ";
	std::cin >> inputNumber;

	int capicuaNumber = 0;
	int temporalNumber = inputNumber;

	for (int i = 0; temporalNumber > 0; i++) {
		capicuaNumber = capicuaNumber * 10 + temporalNumber % 10;
		temporalNumber = temporalNumber / 10;
	}

	if (capicuaNumber == inputNumber) {
		std::cout << "The number " << inputNumber << " is capicua." << '\n';
	} else {
		std::cout << "The number " << inputNumber << " is not capicua." << '\n';
	}

	return 0;
}
