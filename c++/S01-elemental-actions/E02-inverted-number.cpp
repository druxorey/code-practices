#include <iostream>

int main(int argc, char *argv[]) {
	std::cout << "\n\e[0;35m[========= INVERTED NUMBER =========]\e[0m\n\n";

	int originalNumber, invertedNumber = 0;

	std::cout << "Enter a 4 digit number: "; 
	std::cin >> originalNumber;

	int firstDigit, secondDigit, thirdDigit, fourthDigit;

	firstDigit = originalNumber / 1000;
	secondDigit = (originalNumber % 1000) / 100;
	thirdDigit = (originalNumber % 100) / 10;
	fourthDigit = originalNumber % 10;

	invertedNumber = (fourthDigit * 1000) + (thirdDigit * 100) + (secondDigit * 10) + firstDigit;

	std::cout << "The result of inverting the number is: " << invertedNumber << '\n';

	return 0;
}

