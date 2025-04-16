#include <iostream>

int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= INVERTED NUMBER =========]\e[0m\n\n";

	int inputNumber, invertedNumber = 0;

	std::cout << "Please enter a 4-digit number to invert: ";
	std::cin >> inputNumber;

	int digit1, digit2, digit3, digit4;

	digit1 = (inputNumber / 1000);
	digit2 = (inputNumber % 1000) / 100;
	digit3 = (inputNumber % 100) / 10;
	digit4 = (inputNumber % 10);

	invertedNumber = (digit4 * 1000) + (digit3 * 100) + (digit2 * 10) + digit1;

	std::cout << "\n\e[1;32m[RESULT]\e[0m The inverted number is: " << invertedNumber << "\n\n";

	return 0;
}
