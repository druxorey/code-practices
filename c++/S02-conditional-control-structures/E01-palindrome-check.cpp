#include <iostream>

int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= PALINDROME CHECK =========]\e[0m\n\n";

	int inputNumber, outputNumber;
	int firstDigit, secondDigit, fourthDigit, fifthDigit;

	std::cout << "Enter the number: ";
	std::cin >> inputNumber;

	firstDigit = inputNumber / 10000;
	secondDigit = (inputNumber % 10000) / 1000;

	fourthDigit = (inputNumber % 100) / 10;
	fifthDigit = inputNumber % 10;

	if (firstDigit == fifthDigit && secondDigit == fourthDigit) {
		printf("\nThe number %i \e[0;32mis capicua\e[0m\n", inputNumber);
	} else {
		printf("\nThe number %i \e[0;31mis not capicua\e[0m\n", inputNumber);
	}

	return 0;
}
