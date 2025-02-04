#include <iostream>

int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= BINARY TO DECIMAL =========]\e[0m\n\n";

	int binaryNumber, decimalNumber;

	std::cout << "Enter a 4 digit binary number: ";
	std::cin >> binaryNumber;

	int firstDigit, secondDigit, thirdDigit, fourthDigit;

	firstDigit = binaryNumber / 1000;
	secondDigit = (binaryNumber % 1000) / 100;
	thirdDigit = (binaryNumber % 100) / 10;
	fourthDigit = binaryNumber % 10;

	decimalNumber = (firstDigit * 8) + (secondDigit * 4) + (thirdDigit * 2) + fourthDigit;

	std::cout << "The decimal value is: " << decimalNumber << '\n';

	return 0;
}
