#include <iostream>

int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= PALINDROME CHECK =========]\e[0m\n\n";

	int inputNumber;
	int digit1, digit2, digit4, digit5;

	std::cout << "Please enter a 5-digit number: ";
	std::cin >> inputNumber;

	digit1 = (inputNumber / 10000);
	digit2 = (inputNumber % 10000) / 1000;

	digit4 = (inputNumber % 100) / 10;
	digit5 = (inputNumber % 10);

	if (digit1 == digit5 && digit2 == digit4) {
		std::cout << "\e[1;32m[RESULT]\e[0m The number " << inputNumber << " is a palindrome.\n\n";
	} else {
		std::cout << "\e[1;31m[RESULT]\e[0m The number " << inputNumber << " is not a palindrome.\n\n";
	}

	return 0;
}
